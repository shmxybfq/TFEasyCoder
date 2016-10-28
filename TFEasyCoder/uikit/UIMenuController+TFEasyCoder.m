//
//  UIMenuController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMenuController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMenuController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMenuController, UIMenuController *);
TF_EC_MINSTANCE_IMP(UIMenuController, UIMenuController *);


TF_EC_CHAIN_PROP_IMP(UIMenuController ,BOOL,menuVisible)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,long long,arrowDirection)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,NSArray *,menuItems)

@end