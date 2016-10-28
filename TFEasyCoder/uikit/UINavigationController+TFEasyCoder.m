//
//  UINavigationController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UINavigationController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UINavigationController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UINavigationController, UINavigationController *);
TF_EC_MINSTANCE_IMP(UINavigationController, UINavigationController *);



TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,navigationBarHidden)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,toolbarHidden)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,id<UINavigationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,hidesBarsWhenKeyboardAppears)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,hidesBarsOnSwipe)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,hidesBarsWhenVerticallyCompact)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,hidesBarsOnTap)


@end