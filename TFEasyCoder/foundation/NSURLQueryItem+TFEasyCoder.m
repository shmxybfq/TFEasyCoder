//
//  NSURLQueryItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLQueryItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLQueryItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLQueryItem, NSURLQueryItem *);
TF_EC_MINSTANCE_IMP(NSURLQueryItem, NSURLQueryItem *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLQueryItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURLQueryItem);


@end