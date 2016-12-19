//
//  NSObject+TFTimer.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSObject+TFTimer.h"
#import <objc/runtime.h>


@implementation NSObject (TFTimer)

-(NSTimer *)TF_CODE_PRE(addTimerWithTimeInterval):(NSTimeInterval)ti
                                          repeats:(BOOL)yesOrNo
                                         userInfo:(nullable id)userInfo
                                       addRunloop:(BOOL)add
                                         delegate:(_Nullable id<TFTimerDelegate>)delegate
                                       timerBlock:(nonnull TFTimerBackBlock)timerBlock{
    if (!timerBlock && !delegate)return nil;
    NSTimer *timer = [NSTimer scheduledTimerWithTimeInterval:ti
                                                      target:self
                                                    selector:@selector(timerRun:)
                                                    userInfo:userInfo
                                                     repeats:yesOrNo];
    
    NSString *timerBlockKey   = [NSString stringWithFormat:@"%@_blockkey",timer];
    objc_setAssociatedObject(self, timerBackBlockKey(timerBlockKey), timerBlock, OBJC_ASSOCIATION_COPY);
    
    NSString *timerDelegateKey   = [NSString stringWithFormat:@"%@_delegatekey",timer];
    objc_setAssociatedObject(self, timerBackBlockKey(timerDelegateKey), delegate, OBJC_ASSOCIATION_ASSIGN);
    
    if (add) {
        [[NSRunLoop currentRunLoop] addTimer:timer forMode:NSRunLoopCommonModes];
    }
    if ([timer isValid]) {
        [timer fire];
    }
    return timer;
}


-(void)timerRun:(NSTimer *)timer
{
    __weak typeof(self) weakSelf = self;
    NSString *timerBlockKey      = [NSString stringWithFormat:@"%@_blockkey",timer];
    TFTimerBackBlock timerBlock = objc_getAssociatedObject(self, timerBackBlockKey(timerBlockKey));
    if (timerBlock) {
        timerBlock(timer,weakSelf);
    }
    
    NSString *timerDelegateKey      = [NSString stringWithFormat:@"%@_delegatekey",timer];
    id delegate = objc_getAssociatedObject(self, timerBackBlockKey(timerDelegateKey));
    if ([delegate respondsToSelector:@selector(timerRun:target:)]) {
        [delegate timerRun:timer target:weakSelf];
    }
}

-(void)timerRun:(NSTimer *)timer target:(id)tareget{}

-(void)TF_CODE_PRE(stopTimer):(NSTimer *_Nonnull)timer{
    if (timer != nil && [timer isKindOfClass:[NSTimer class]]) {
        
        NSString *timerKey = [NSString stringWithFormat:@"%@",timer];
        TFTimerBackBlock timerBlock = objc_getAssociatedObject(self, timerBackBlockKey(timerKey));
        timerBlock = nil;
        
        if ([timer isValid]) {
            [timer invalidate];
        }
    }
}

/**
 *  get dynamic Associated key
 *  获取动态绑定key,key的内存地址不变
 */
static NSMutableDictionary *_timerBackBlockKeyContainer = nil;
static const void *timerBackBlockKey(NSString *key){
    if (!_timerBackBlockKeyContainer) _timerBackBlockKeyContainer = [[NSMutableDictionary alloc] init];
    NSString *associatedKey = [_timerBackBlockKeyContainer objectForKey:key];
    if (!associatedKey) {
        [_timerBackBlockKeyContainer setObject:key forKey:key];
        associatedKey = key;
    }
    return (__bridge const void *)(associatedKey);
}


@end
