//
//  NSURLCache+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLCache+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLCache (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLCache, NSURLCache *);
TF_EC_MINSTANCE_IMP(NSURLCache, NSURLCache *);


TF_EC_CHAIN_PROP_IMP(NSURLCache ,unsigned long long,memoryCapacity)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,unsigned long long,diskCapacity)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLCache ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURLCache);


@end