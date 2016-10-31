//
//  UIGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIGestureRecognizer, UIGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UIGestureRecognizer, UIGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,cancelsTouchesInView)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,delaysTouchesBegan)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,delaysTouchesEnded)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSArray *,allowedTouchTypes)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSArray *,allowedPressTypes)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,long long,accessibilityNavigationStyle)





@end