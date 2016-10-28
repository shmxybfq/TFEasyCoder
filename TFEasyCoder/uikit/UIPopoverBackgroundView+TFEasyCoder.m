//
//  UIPopoverBackgroundView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPopoverBackgroundView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPopoverBackgroundView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPopoverBackgroundView, UIPopoverBackgroundView *);
TF_EC_MINSTANCE_IMP(UIPopoverBackgroundView, UIPopoverBackgroundView *);


TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,double,arrowOffset)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,unsigned long long,arrowDirection)

@end