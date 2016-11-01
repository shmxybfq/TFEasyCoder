//
//  CAAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAAnimation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAAnimation (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAAnimation, CAAnimation *);
TF_EC_MINSTANCE_IMP(CAAnimation, CAAnimation *);



TF_EC_CHAIN_PROP_IMP(CAAnimation ,CAMediaTimingFunction *,timingFunction)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,NSString *,fillMode)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CAAnimation);


@end