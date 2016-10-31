//
//  CASpringAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CASpringAnimation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CASpringAnimation (TFEasyCoder)

TF_EC_MSTATIC_IMP(CASpringAnimation, CASpringAnimation *);
TF_EC_MINSTANCE_IMP(CASpringAnimation, CASpringAnimation *);


TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,mass)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,stiffness)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,damping)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,initialVelocity)




//superclass pros CABasicAnimation
//superclass pros CAPropertyAnimation
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,NSString *,keyPath)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,BOOL,additive)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,BOOL,cumulative)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,CAValueFunction *,valueFunction)
//superclass pros CAAnimation
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,CAMediaTimingFunction *,timingFunction)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,duration)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,float,speed)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,long long,accessibilityNavigationStyle)





@end