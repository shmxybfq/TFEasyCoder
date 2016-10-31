//
//  NSMutableDictionary+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableDictionary+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableDictionary (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableDictionary, NSMutableDictionary *);
TF_EC_MINSTANCE_IMP(NSMutableDictionary, NSMutableDictionary *);






//superclass pros NSDictionary
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableDictionary ,long long,accessibilityNavigationStyle)





@end