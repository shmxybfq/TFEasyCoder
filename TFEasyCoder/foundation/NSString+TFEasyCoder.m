//
//  NSString+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSString+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSString (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSString, NSString *);
TF_EC_MINSTANCE_IMP(NSString, NSString *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSString ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSString);


@end