//
//  UITabBarController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITabBarController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITabBarController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITabBarController, UITabBarController *);
TF_EC_MINSTANCE_IMP(UITabBarController, UITabBarController *);


TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,UIViewController *,selectedViewController)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,unsigned long long,selectedIndex)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSArray *,customizableViewControllers)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,id<UITabBarControllerDelegate>  ,delegate)


@end