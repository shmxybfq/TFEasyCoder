//
//  NSMutableOrderedSet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableOrderedSet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableOrderedSet (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableOrderedSet, NSMutableOrderedSet *);
TF_EC_MINSTANCE_IMP(NSMutableOrderedSet, NSMutableOrderedSet *);






//superclass pros NSOrderedSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableOrderedSet ,long long,accessibilityNavigationStyle)





@end