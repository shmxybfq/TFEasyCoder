//
//  UINavigationController+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/9.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UINavigationController+TFKit.h"

@implementation UINavigationController (TFKit)

/**
 *  pop 到指定控制器
 *  @param cls      控制器的class
 *  @param nav      操作的导航控制器
 *  @return 是否pop成功
 */
+(BOOL)TF_CODE_PRE(popToClass):(Class)cls animated:(BOOL)animated nav:(UINavigationController *)nav{
    for (UIViewController *vc in nav.viewControllers) {
        if ([vc isKindOfClass:cls]) {
            [nav popToViewController:vc animated:animated];
            return YES;
        }
    }
    return NO;
}
-(BOOL)TF_CODE_PRE(popToClass):(Class)cls animated:(BOOL)animated{
    return [UINavigationController TF_CODE_PRE(popToClass):cls animated:animated nav:self];
}

@end
