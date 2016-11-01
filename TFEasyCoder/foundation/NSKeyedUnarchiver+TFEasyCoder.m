//
//  NSKeyedUnarchiver+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSKeyedUnarchiver+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSKeyedUnarchiver (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSKeyedUnarchiver, NSKeyedUnarchiver *);
TF_EC_MINSTANCE_IMP(NSKeyedUnarchiver, NSKeyedUnarchiver *);


TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,id<NSKeyedUnarchiverDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,BOOL,requiresSecureCoding)




//superclass pros NSCoder
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSKeyedUnarchiver);


@end