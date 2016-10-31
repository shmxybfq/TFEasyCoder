//
//  CAPropertyAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAPropertyAnimation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAPropertyAnimation (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAPropertyAnimation, CAPropertyAnimation *);
TF_EC_MINSTANCE_IMP(CAPropertyAnimation, CAPropertyAnimation *);


TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,NSString *,keyPath)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,BOOL,additive)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,BOOL,cumulative)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,CAValueFunction *,valueFunction)




//superclass pros CAAnimation
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,CAMediaTimingFunction *,timingFunction)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,long long,accessibilityNavigationStyle)





@end