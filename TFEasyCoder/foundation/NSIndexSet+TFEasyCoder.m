//
//  NSIndexSet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSIndexSet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSIndexSet (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSIndexSet, NSIndexSet *);
TF_EC_MINSTANCE_IMP(NSIndexSet, NSIndexSet *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSIndexSet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSIndexSet);


@end