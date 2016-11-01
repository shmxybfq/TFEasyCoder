//
//  NSConditionLock+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSConditionLock+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSConditionLock (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSConditionLock, NSConditionLock *);
TF_EC_MINSTANCE_IMP(NSConditionLock, NSConditionLock *);


TF_EC_CHAIN_PROP_IMP(NSConditionLock ,NSString *,name)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSConditionLock ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSConditionLock);


@end