//
//  UIPopoverPresentationController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPopoverPresentationController,UIPopoverPresentationController *);

@interface UIPopoverPresentationController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPopoverPresentationController, UIPopoverPresentationController *);
TF_EC_MINSTANCE_INT(UIPopoverPresentationController,UIPopoverPresentationController *);

TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,id<UIPopoverPresentationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,unsigned long long,permittedArrowDirections)
TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,UIView *,sourceView)
TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,BOOL,canOverlapSourceViewRect)
TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,UIBarButtonItem *,barButtonItem)
TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,NSArray *,passthroughViews)
TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,UIColor *,backgroundColor)
TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,UIEdgeInsets,popoverLayoutMargins)
TF_EC_CHAIN_PROP_INT(UIPopoverPresentationController ,Class,popoverBackgroundViewClass)

@end