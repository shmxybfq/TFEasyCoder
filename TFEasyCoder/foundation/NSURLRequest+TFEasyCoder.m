//
//  NSURLRequest+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLRequest+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLRequest (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLRequest, NSURLRequest *);
TF_EC_MINSTANCE_IMP(NSURLRequest, NSURLRequest *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLRequest ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURLRequest);


@end