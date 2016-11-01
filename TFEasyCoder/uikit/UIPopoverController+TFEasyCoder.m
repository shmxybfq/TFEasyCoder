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




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPopoverController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPopoverController);


@end