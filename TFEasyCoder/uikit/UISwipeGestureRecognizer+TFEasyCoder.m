//
//  UISwipeGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISwipeGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISwipeGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISwipeGestureRecognizer, UISwipeGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UISwipeGestureRecognizer, UISwipeGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,unsigned long long,direction)





//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,BOOL,cancelsTouchesInView)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,BOOL,delaysTouchesBegan)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,BOOL,delaysTouchesEnded)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,NSArray *,allowedTouchTypes)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,NSArray *,allowedPressTypes)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UISwipeGestureRecognizer);


@end