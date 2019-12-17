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
#import "TFGCDKit.h"

#ifndef kWarningSign
#define kWarningSign(String)\
[NSString stringWithFormat:@"\n****************** %@ ******************",String]
#endif

@implementation UIViewController (TFDebugKit)

+(void)load{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        [UIViewController tf_code_pre(instanceMethodExchange):@selector(viewDidAppear:) toClass:[self class] toSel:@selector(tf_debug_viewDidAppear:)];
        
        [UIViewController tf_code_pre(instanceMethodExchange):@selector(viewDidDisappear:) toClass:[self class] toSel:@selector(tf_debug_viewDidDisappear:)];
    });
}


-(void)tf_debug_viewDidAppear:(BOOL)animated{
#ifdef DEBUG
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearSubviewRandomColor)
        [self.view tf_code_pre(setAllSubviewsBackgroundColorRandom):0.5];
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearSubviewDisplayBorder)
        [self.view tf_code_pre(setAllSubviewsBorderRed)];
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearLogVCName){
        NSString *warning = [NSString stringWithFormat:@"当前控制器 %@",NSStringFromClass([self class])];
        NSLog(@"\n%@\n",kWarningSign(warning));
    }
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearLogSubview)
        TFLog(@"%@-subviews:%@",NSStringFromClass([self class]),[self.view tf_code_pre(getAllSubviews)]);
    if([TFEasyCoderConfigue shareInstance].TFDebug_VCDidAppearLogSubviewTree)
        [self.view tf_code_pre(logSubviews):^NSArray *{return @[@"frame",@"hidden",@"backgroundColor",@"userInteractionEnabled"];}];
#endif
    [self tf_debug_viewDidAppear:animated];
}


-(void)tf_debug_viewDidDisappear:(BOOL)animated{
#ifdef DEBUG
    kdeclare_weakself;
    tf_code_pre(delay)(1.0,^{
        if (!weakSelf) return;
        if ([NSStringFromClass([weakSelf class])hasPrefix:@"UI"]) return;
        if (!(weakSelf.presentedViewController ||
              [weakSelf.navigationController.viewControllers containsObject:weakSelf] ||
              weakSelf.parentViewController ||
              weakSelf.tabBarController)) {
            NSString *warning = [NSString stringWithFormat:@"警告!控制未释放!%@",NSStringFromClass([weakSelf class])];
            NSString *info0 = [NSString stringWithFormat:@"self:【%@】",weakSelf?:@""];
            NSString *info1 = [NSString stringWithFormat:@"self.presentedViewController:【%@】",weakSelf.presentedViewController?:@""];
            NSString *info2 = [NSString stringWithFormat:@"self.parentViewController:【%@】",weakSelf.parentViewController?:@""];
            NSString *info3 = [NSString stringWithFormat:@"self.navigationController.viewControllers:【%@】",weakSelf.navigationController.viewControllers?:@""];
            NSLog(@"\n\n%@\n%@\n%@\n%@\n%@\n\n",kWarningSign(warning),info0,info1,info2,info3);
        }
    });
#endif
    [self tf_debug_viewDidDisappear:animated];
}

@end
