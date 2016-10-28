//
//  UIWindow+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIWindow+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIWindow (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIWindow, UIWindow *);
TF_EC_MINSTANCE_IMP(UIWindow, UIWindow *);


TF_EC_CHAIN_PROP_IMP(UIWindow ,UIScreen *,screen)
TF_EC_CHAIN_PROP_IMP(UIWindow ,double,windowLevel)
TF_EC_CHAIN_PROP_IMP(UIWindow ,UIViewController *,rootViewController)



@end