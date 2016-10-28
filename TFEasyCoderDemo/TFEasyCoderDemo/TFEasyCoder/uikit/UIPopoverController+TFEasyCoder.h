//
//  UIPopoverController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_BLOCK(UIPopoverController,UIPopoverController *);

@interface UIPopoverController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPopoverController, UIPopoverController *);
TF_EC_MINSTANCE_INT(UIPopoverController,UIPopoverController *);

TF_EC_CHAIN_PROP_INT(UIPopoverController ,id<UIPopoverControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,UIViewController *,contentViewController)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,CGSize,popoverContentSize)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,NSArray *,passthroughViews)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,UIColor *,backgroundColor)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,UIEdgeInsets,popoverLayoutMargins)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,Class,popoverBackgroundViewClass)


@end