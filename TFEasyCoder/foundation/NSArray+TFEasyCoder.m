//
//  NSArray+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSArray+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSArray (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSArray, NSArray *);
TF_EC_MINSTANCE_IMP(NSArray, NSArray *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSArray ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSArray ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSArray ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSArray ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSArray ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSArray ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSArray ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSArray ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSArray ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSArray ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSArray ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSArray ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSArray ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSArray ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSArray);


@end