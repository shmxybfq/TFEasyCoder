//
//  UIPopoverBackgroundView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPopoverBackgroundView,UIPopoverBackgroundView *);

@interface UIPopoverBackgroundView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPopoverBackgroundView, UIPopoverBackgroundView *);
TF_EC_MINSTANCE_INT(UIPopoverBackgroundView,UIPopoverBackgroundView *);


TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,double,arrowOffset);
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,unsigned long long,arrowDirection);

@end