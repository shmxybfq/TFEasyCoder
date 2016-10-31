//
//  UIPinchGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPinchGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPinchGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPinchGestureRecognizer, UIPinchGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UIPinchGestureRecognizer, UIPinchGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,double,scale)





//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,BOOL,cancelsTouchesInView)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,BOOL,delaysTouchesBegan)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,BOOL,delaysTouchesEnded)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,NSArray *,allowedTouchTypes)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,NSArray *,allowedPressTypes)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,long long,accessibilityNavigationStyle)





@end