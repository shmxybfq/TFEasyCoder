//
//  NSCountedSet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCountedSet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCountedSet (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCountedSet, NSCountedSet *);
TF_EC_MINSTANCE_IMP(NSCountedSet, NSCountedSet *);






//superclass pros NSMutableSet
//superclass pros NSSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSCountedSet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSCountedSet);


@end