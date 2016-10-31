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




//superclass pros UIPresentationController
//TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,id<UIAdaptivePresentationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,UITraitCollection *,overrideTraitCollection)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,long long,accessibilityNavigationStyle)





@end