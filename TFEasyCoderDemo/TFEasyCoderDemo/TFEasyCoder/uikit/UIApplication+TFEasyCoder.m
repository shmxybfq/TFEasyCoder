//
//  UIApplication+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIApplication+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIApplication (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIApplication, UIApplication *);
TF_EC_MINSTANCE_IMP(UIApplication, UIApplication *);


TF_EC_CHAIN_PROP_IMP(UIApplication ,id<UIApplicationDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,idleTimerDisabled)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,networkActivityIndicatorVisible)
TF_EC_CHAIN_PROP_IMP(UIApplication ,long long,applicationIconBadgeNumber)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,applicationSupportsShakeToEdit)

@end