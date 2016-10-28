//
//  UITabBarController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITabBarController,UITabBarController *);

@interface UITabBarController (TFEasyCoder)

TF_EC_MSTATIC_INT(UITabBarController, UITabBarController *);
TF_EC_MINSTANCE_INT(UITabBarController,UITabBarController *);


TF_EC_CHAIN_PROP_INT(UITabBarController ,NSArray *,viewControllers);
TF_EC_CHAIN_PROP_INT(UITabBarController ,UIViewController *,selectedViewController);
TF_EC_CHAIN_PROP_INT(UITabBarController ,unsigned long long,selectedIndex);
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSArray *,customizableViewControllers);
TF_EC_CHAIN_PROP_INT(UITabBarController ,id<UITabBarControllerDelegate> ,delegate);


@end