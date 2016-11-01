//
//  NSUbiquitousKeyValueStore+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSUbiquitousKeyValueStore+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSUbiquitousKeyValueStore (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSUbiquitousKeyValueStore, NSUbiquitousKeyValueStore *);
TF_EC_MINSTANCE_IMP(NSUbiquitousKeyValueStore, NSUbiquitousKeyValueStore *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSUbiquitousKeyValueStore ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSUbiquitousKeyValueStore);


@end