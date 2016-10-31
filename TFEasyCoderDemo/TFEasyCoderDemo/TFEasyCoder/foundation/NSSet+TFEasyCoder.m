//
//  NSSet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSSet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSSet (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSSet, NSSet *);
TF_EC_MINSTANCE_IMP(NSSet, NSSet *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSSet ,long long,accessibilityNavigationStyle)





@end