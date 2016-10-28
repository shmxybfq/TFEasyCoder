//
//  UILayoutGuide+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILayoutGuide+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UILayoutGuide (TFEasyCoder)

TF_EC_MSTATIC_IMP(UILayoutGuide, UILayoutGuide *);
TF_EC_MINSTANCE_IMP(UILayoutGuide, UILayoutGuide *);


TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,UIView *,owningView)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,NSString *,identifier)

@end