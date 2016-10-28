//
//  UINavigationBar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UINavigationBar+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UINavigationBar (TFEasyCoder)

TF_EC_MSTATIC_IMP(UINavigationBar, UINavigationBar *);
TF_EC_MINSTANCE_IMP(UINavigationBar, UINavigationBar *);


TF_EC_CHAIN_PROP_IMP(UINavigationBar ,long long,barStyle)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,id<UINavigationBarDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,BOOL,translucent)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSArray *,items)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIColor *,barTintColor)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIImage *,shadowImage)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSDictionary *,titleTextAttributes)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIImage *,backIndicatorImage)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIImage *,backIndicatorTransitionMaskImage)

@end