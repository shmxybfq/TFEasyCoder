//
//  NSHashTable+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSHashTable+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSHashTable (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSHashTable, NSHashTable *);
TF_EC_MINSTANCE_IMP(NSHashTable, NSHashTable *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSHashTable ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSHashTable ,long long,accessibilityNavigationStyle)





@end