//
//  NSMutableString+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableString+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableString (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableString, NSMutableString *);
TF_EC_MINSTANCE_IMP(NSMutableString, NSMutableString *);






//superclass pros NSString
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableString ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSMutableString);


@end