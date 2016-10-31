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




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPopoverBackgroundView ,long long,accessibilityNavigationStyle)





@end