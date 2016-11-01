//
//  NSValue+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSValue+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSValue (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSValue, NSValue *);
TF_EC_MINSTANCE_IMP(NSValue, NSValue *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSValue ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSValue ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSValue ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSValue ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSValue ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSValue ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSValue ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSValue ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSValue ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSValue ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSValue ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSValue ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSValue ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSValue ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSValue);


@end