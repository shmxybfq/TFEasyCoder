//
//  UILongPressGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILongPressGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UILongPressGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UILongPressGestureRecognizer, UILongPressGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UILongPressGestureRecognizer, UILongPressGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,unsigned long long,numberOfTapsRequired)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,double,minimumPressDuration)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,double,allowableMovement)





//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,BOOL,cancelsTouchesInView)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,BOOL,delaysTouchesBegan)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,BOOL,delaysTouchesEnded)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,NSArray *,allowedTouchTypes)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,NSArray *,allowedPressTypes)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,long long,accessibilityNavigationStyle)





@end