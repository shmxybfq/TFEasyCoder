//
//  NSValueTransformer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSValueTransformer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSValueTransformer (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSValueTransformer, NSValueTransformer *);
TF_EC_MINSTANCE_IMP(NSValueTransformer, NSValueTransformer *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSValueTransformer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSValueTransformer);


@end