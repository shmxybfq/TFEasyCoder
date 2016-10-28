//
//  UINavigationItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UINavigationItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UINavigationItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UINavigationItem, UINavigationItem *);
TF_EC_MINSTANCE_IMP(UINavigationItem, UINavigationItem *);


TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,UIView *,titleView)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSString *,prompt)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,UIBarButtonItem *,backBarButtonItem)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,BOOL,hidesBackButton)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSArray *,leftBarButtonItems)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSArray *,rightBarButtonItems)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,BOOL,leftItemsSupplementBackButton)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,UIBarButtonItem *,leftBarButtonItem)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,UIBarButtonItem *,rightBarButtonItem)

@end