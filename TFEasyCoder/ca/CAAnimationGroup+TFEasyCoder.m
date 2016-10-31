//
//  CAAnimationGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAAnimationGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAAnimationGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAAnimationGroup, CAAnimationGroup *);
TF_EC_MINSTANCE_IMP(CAAnimationGroup, CAAnimationGroup *);


TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,NSArray *,animations)




//superclass pros CAAnimation
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,CAMediaTimingFunction *,timingFunction)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,long long,accessibilityNavigationStyle)





@end