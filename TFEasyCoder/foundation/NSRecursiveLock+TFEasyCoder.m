//
//  NSRecursiveLock+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSRecursiveLock+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSRecursiveLock (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSRecursiveLock, NSRecursiveLock *);
TF_EC_MINSTANCE_IMP(NSRecursiveLock, NSRecursiveLock *);


TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,NSString *,name)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSRecursiveLock);


@end