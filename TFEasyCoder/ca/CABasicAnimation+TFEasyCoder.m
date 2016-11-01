//
//  CABasicAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CABasicAnimation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CABasicAnimation (TFEasyCoder)

TF_EC_MSTATIC_IMP(CABasicAnimation, CABasicAnimation *);
TF_EC_MINSTANCE_IMP(CABasicAnimation, CABasicAnimation *);






//superclass pros CAPropertyAnimation
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,NSString *,keyPath)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,BOOL,additive)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,BOOL,cumulative)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,CAValueFunction *,valueFunction)
//superclass pros CAAnimation
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,CAMediaTimingFunction *,timingFunction)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,double,duration)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,float,speed)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CABasicAnimation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CABasicAnimation);


@end