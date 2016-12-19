//
//  UIViewController+TFDebugKit.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/18.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "UIViewController+TFDebugKit.h"
#import "TFEasyCoderConst.h"
#import <objc/runtime.h>
#import "UIView+TFUIDevKit.h"
@implementation UIViewController (TFDebugKit)
+(void)load{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class cls = [self class];
        SEL originalSelector = @selector(viewDidAppear:);
        SEL swizzledSelector = @selector(tf_debug_viewDidAppear:);
        Method originalMethod = class_getInstanceMethod(cls, originalSelector);
        Method swizzledMethod = class_getInstanceMethod(cls, swizzledSelector);
        method_exchangeImplementations(originalMethod, swizzledMethod);
    });
    
}

-(void)tf_debug_viewDidAppear:(BOOL)animated{
    
    if(TFDebug_VCDidAppearSubviewRandomColor)[self.view tf_setAllSubviewsBackgroundColorRandom:0.5];
    if(TFDebug_VCDidAppearSubviewDisplayBorder)[self.view tf_setAllSubviewsBorderRed];
    if(TFDebug_VCDidAppearLogVCName)NSLog(@"当前控制器:%@",NSStringFromClass([self class]));
    if(TFDebug_VCDidAppearLogSubview)NSLog(@"%@-subviews:%@",NSStringFromClass([self class]),[self.view tf_getAllSubviews]);
    if(TFDebug_VCDidAppearLogSubviewTree)[self.view tf_logSubviews:^NSArray *{return @[@"frame",@"hidden",@"backgroundColor",@"userInteractionEnabled"];}];
    [self tf_debug_viewDidAppear:animated];
}
@end
