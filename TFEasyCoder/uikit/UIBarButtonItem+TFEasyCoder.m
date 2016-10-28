//
//  UIBarButtonItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIBarButtonItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIBarButtonItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIBarButtonItem, UIBarButtonItem *);
TF_EC_MINSTANCE_IMP(UIBarButtonItem, UIBarButtonItem *);


TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIEdgeInsets,imageInsets)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,long long,style)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,double,width)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,NSSet *,possibleTitles)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIView *,customView)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,SEL,action)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIColor *,tintColor)



@end