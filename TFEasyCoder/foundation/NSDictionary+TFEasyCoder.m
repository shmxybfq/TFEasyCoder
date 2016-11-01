//
//  NSDictionary+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDictionary+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSDictionary (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSDictionary, NSDictionary *);
TF_EC_MINSTANCE_IMP(NSDictionary, NSDictionary *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSDictionary ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSDictionary ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSDictionary);


@end