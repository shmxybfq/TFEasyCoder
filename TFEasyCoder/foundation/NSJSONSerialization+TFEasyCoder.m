//
//  NSJSONSerialization+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSJSONSerialization+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSJSONSerialization (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSJSONSerialization, NSJSONSerialization *);
TF_EC_MINSTANCE_IMP(NSJSONSerialization, NSJSONSerialization *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSJSONSerialization ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSJSONSerialization);


@end