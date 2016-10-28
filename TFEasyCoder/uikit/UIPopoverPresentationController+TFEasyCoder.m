//
//  UIPopoverPresentationController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPopoverPresentationController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPopoverPresentationController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPopoverPresentationController, UIPopoverPresentationController *);
TF_EC_MINSTANCE_IMP(UIPopoverPresentationController, UIPopoverPresentationController *);


TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,id<UIPopoverPresentationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,unsigned long long,permittedArrowDirections)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,UIView *,sourceView)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,BOOL,canOverlapSourceViewRect)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,UIBarButtonItem *,barButtonItem)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,NSArray *,passthroughViews)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,UIColor *,backgroundColor)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,UIEdgeInsets,popoverLayoutMargins)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,Class,popoverBackgroundViewClass)

@end