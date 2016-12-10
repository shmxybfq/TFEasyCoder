//
//  NSObject+TFTimer.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "objc/runtime.h"
#import "TFEasyCoderConst.h"
typedef void(^TFTimerBackBlock)(NSTimer *timer,id target);

@protocol TFTimerDelegate <NSObject>
@required
-(void)timerRun:(NSTimer *)timer target:(id)tareget;
@end

@interface NSObject (TFTimer)<TFTimerDelegate>

/**
 *  创建一个定时器,此方法可以创建多个定时器,代理回调和block回调可以同时使用
 *
 *  @param ti         定时器时间戳
 *  @param yesOrNo    是否重复
 *  @param userInfo   userInfo
 *  @param add        是否添加到runloop
 *  @param delegate   是否使用代理回调
 *  @param timerBlock 是否使用block回调
 *
 *  @return 返回定时器实例对象
 */
-(NSTimer *)TF_CODE_PRE(addTimerWithTimeInterval):(NSTimeInterval)ti
                                          repeats:(BOOL)yesOrNo
                                         userInfo:(nullable id)userInfo
                                       addRunloop:(BOOL)add
                                         delegate:(_Nullable id<TFTimerDelegate>)delegate
                                       timerBlock:(nonnull TFTimerBackBlock)timerBlock;

/**
 *  停止定时器
 *
 *  @param timer 要停止的定时器对象
 */
-(void)TF_CODE_PRE(stopTimer):(NSTimer *_Nonnull)timer;


@end
