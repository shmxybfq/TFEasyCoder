//
//  NSMutableSet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableSet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableSet (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableSet, NSMutableSet *);
TF_EC_MINSTANCE_IMP(NSMutableSet, NSMutableSet *);






//superclass pros NSSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableSet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSMutableSet);


@end