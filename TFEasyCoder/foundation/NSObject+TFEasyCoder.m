//
//  NSObject+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSObject+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSObject (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSObject, NSObject *);
TF_EC_MINSTANCE_IMP(NSObject, NSObject *);


TF_EC_CHAIN_PROP_IMP(NSObject ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSObject ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSObject ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSObject ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSObject ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSObject ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSObject ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSObject ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSObject ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSObject ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSObject ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSObject ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSObject ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSObject ,long long,accessibilityNavigationStyle)

@end