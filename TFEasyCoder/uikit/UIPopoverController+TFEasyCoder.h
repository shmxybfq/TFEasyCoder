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





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPopoverController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPopoverController ,long long,accessibilityNavigationStyle)





@end