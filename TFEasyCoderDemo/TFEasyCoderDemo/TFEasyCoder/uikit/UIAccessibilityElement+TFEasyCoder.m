//
//  UIAccessibilityElement+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAccessibilityElement+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAccessibilityElement (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAccessibilityElement, UIAccessibilityElement *);
TF_EC_MINSTANCE_IMP(UIAccessibilityElement, UIAccessibilityElement *);


TF_EC_CHAIN_PROP_IMP(UIAccessibilityElement ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityElement ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityElement ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityElement ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityElement ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityElement ,NSString *,accessibilityIdentifier)

@end