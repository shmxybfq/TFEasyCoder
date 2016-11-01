//
//  NSOrderedSet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSOrderedSet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSOrderedSet (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSOrderedSet, NSOrderedSet *);
TF_EC_MINSTANCE_IMP(NSOrderedSet, NSOrderedSet *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSOrderedSet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSOrderedSet);


@end