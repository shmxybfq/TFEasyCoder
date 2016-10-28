//
//  UIPopoverController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPopoverController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPopoverController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPopoverController, UIPopoverController *);
TF_EC_MINSTANCE_IMP(UIPopoverController, UIPopoverController *);


TF_EC_CHAIN_PROP_IMP(UIPopoverController ,id<UIPopoverControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,UIViewController *,contentViewController)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,CGSize,popoverContentSize)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,NSArray *,passthroughViews)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,UIColor *,backgroundColor)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,UIEdgeInsets,popoverLayoutMargins)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,Class,popoverBackgroundViewClass)

@end