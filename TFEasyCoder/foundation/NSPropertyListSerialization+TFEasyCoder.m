//
//  NSPropertyListSerialization+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPropertyListSerialization+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPropertyListSerialization (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPropertyListSerialization, NSPropertyListSerialization *);
TF_EC_MINSTANCE_IMP(NSPropertyListSerialization, NSPropertyListSerialization *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSPropertyListSerialization ,long long,accessibilityNavigationStyle)





@end