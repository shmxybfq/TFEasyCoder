//
//  NSNull+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNull+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNull (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNull, NSNull *);
TF_EC_MINSTANCE_IMP(NSNull, NSNull *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSNull ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSNull ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSNull ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSNull ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSNull ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSNull ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSNull ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSNull ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSNull ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSNull ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSNull ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSNull ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSNull ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSNull ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSNull);


@end