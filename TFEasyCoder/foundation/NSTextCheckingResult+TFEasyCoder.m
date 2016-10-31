//
//  NSTextCheckingResult+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTextCheckingResult+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTextCheckingResult (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTextCheckingResult, NSTextCheckingResult *);
TF_EC_MINSTANCE_IMP(NSTextCheckingResult, NSTextCheckingResult *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSTextCheckingResult ,long long,accessibilityNavigationStyle)





@end