//
//  UIPanGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPanGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPanGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPanGestureRecognizer, UIPanGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UIPanGestureRecognizer, UIPanGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,unsigned long long,minimumNumberOfTouches)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,unsigned long long,maximumNumberOfTouches)




//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,BOOL,cancelsTouchesInView)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,BOOL,delaysTouchesBegan)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,BOOL,delaysTouchesEnded)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,NSArray *,allowedTouchTypes)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,NSArray *,allowedPressTypes)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPanGestureRecognizer);


@end