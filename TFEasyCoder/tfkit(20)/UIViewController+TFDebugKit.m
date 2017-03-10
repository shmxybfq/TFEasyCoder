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
#import "TFEasyCoderConfigue.h"
#import "NSObject+TFKit.h"
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
    
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearSubviewRandomColor)[self.view TF_CODE_PRE(setAllSubviewsBackgroundColorRandom):0.5];
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearSubviewDisplayBorder)[self.view TF_CODE_PRE(setAllSubviewsBorderRed)];
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearLogVCName)NSLog(@"当前控制器:%@",NSStringFromClass([self class]));
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearLogSubview)NSLog(@"%@-subviews:%@",NSStringFromClass([self class]),[self.view TF_CODE_PRE(getAllSubviews)]);
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearLogSubviewTree)[self.view TF_CODE_PRE(logSubviews):^NSArray *{return @[@"frame",@"hidden",@"backgroundColor",@"userInteractionEnabled"];}];
    [self tf_debug_viewDidAppear:animated];
}
@end
