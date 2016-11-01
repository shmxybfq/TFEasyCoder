//
//  NSLocale+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLocale+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSLocale (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSLocale, NSLocale *);
TF_EC_MINSTANCE_IMP(NSLocale, NSLocale *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSLocale ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSLocale ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSLocale ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSLocale ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSLocale ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSLocale ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSLocale ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSLocale ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSLocale ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSLocale ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSLocale ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSLocale ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSLocale ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSLocale ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSLocale);


@end