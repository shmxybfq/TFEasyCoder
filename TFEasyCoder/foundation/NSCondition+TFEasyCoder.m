//
//  NSCondition+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCondition+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCondition (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCondition, NSCondition *);
TF_EC_MINSTANCE_IMP(NSCondition, NSCondition *);


TF_EC_CHAIN_PROP_IMP(NSCondition ,NSString *,name)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSCondition ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSCondition ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSCondition ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSCondition ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSCondition ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSCondition ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSCondition ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSCondition ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSCondition ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSCondition ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSCondition ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSCondition ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSCondition ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSCondition ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSCondition);


@end