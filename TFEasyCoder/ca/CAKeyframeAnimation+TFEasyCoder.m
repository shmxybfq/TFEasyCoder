//
//  CAKeyframeAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAKeyframeAnimation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAKeyframeAnimation (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAKeyframeAnimation, CAKeyframeAnimation *);
TF_EC_MINSTANCE_IMP(CAKeyframeAnimation, CAKeyframeAnimation *);


TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,values)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,CGPathRef,path)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,keyTimes)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,timingFunctions)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,calculationMode)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,tensionValues)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,continuityValues)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,biasValues)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,rotationMode)




//superclass pros CAPropertyAnimation
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,keyPath)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,BOOL,additive)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,BOOL,cumulative)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,CAValueFunction *,valueFunction)
//superclass pros CAAnimation
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,CAMediaTimingFunction *,timingFunction)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CAKeyframeAnimation);


@end