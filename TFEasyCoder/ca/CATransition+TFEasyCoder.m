//
//  CATransition+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CATransition+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CATransition (TFEasyCoder)

TF_EC_MSTATIC_IMP(CATransition, CATransition *);
TF_EC_MINSTANCE_IMP(CATransition, CATransition *);


TF_EC_CHAIN_PROP_IMP(CATransition ,NSString *,type)
TF_EC_CHAIN_PROP_IMP(CATransition ,NSString *,subtype)
TF_EC_CHAIN_PROP_IMP(CATransition ,float,startProgress)
TF_EC_CHAIN_PROP_IMP(CATransition ,float,endProgress)




//superclass pros CAAnimation
TF_EC_CHAIN_PROP_IMP(CATransition ,CAMediaTimingFunction *,timingFunction)
TF_EC_CHAIN_PROP_IMP(CATransition ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CATransition ,double,duration)
TF_EC_CHAIN_PROP_IMP(CATransition ,float,speed)
TF_EC_CHAIN_PROP_IMP(CATransition ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CATransition ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CATransition ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CATransition ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CATransition ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CATransition ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CATransition ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CATransition ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CATransition ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CATransition ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CATransition ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CATransition ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CATransition ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CATransition ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CATransition ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CATransition ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CATransition ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CATransition ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CATransition ,long long,accessibilityNavigationStyle)





@end