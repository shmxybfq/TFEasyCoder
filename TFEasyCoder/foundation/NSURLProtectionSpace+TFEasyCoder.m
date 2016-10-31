//
//  NSURLProtectionSpace+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLProtectionSpace+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLProtectionSpace (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLProtectionSpace, NSURLProtectionSpace *);
TF_EC_MINSTANCE_IMP(NSURLProtectionSpace, NSURLProtectionSpace *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLProtectionSpace ,long long,accessibilityNavigationStyle)





@end