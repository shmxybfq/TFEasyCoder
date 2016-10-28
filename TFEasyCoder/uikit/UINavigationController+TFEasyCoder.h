//
//  UINavigationController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UINavigationController,UINavigationController *);

@interface UINavigationController (TFEasyCoder)

TF_EC_MSTATIC_INT(UINavigationController, UINavigationController *);
TF_EC_MINSTANCE_INT(UINavigationController,UINavigationController *);


TF_EC_CHAIN_PROP_INT(UINavigationController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,navigationBarHidden)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,toolbarHidden)
TF_EC_CHAIN_PROP_INT(UINavigationController ,id<UINavigationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,hidesBarsWhenKeyboardAppears)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,hidesBarsOnSwipe)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,hidesBarsWhenVerticallyCompact)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,hidesBarsOnTap)


@end