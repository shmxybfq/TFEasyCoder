//
//  NSURLProtocol+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLProtocol+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLProtocol (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLProtocol, NSURLProtocol *);
TF_EC_MINSTANCE_IMP(NSURLProtocol, NSURLProtocol *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLProtocol ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURLProtocol);


@end