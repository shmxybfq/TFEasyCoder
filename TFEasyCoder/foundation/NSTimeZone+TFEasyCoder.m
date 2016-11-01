//
//  NSTimeZone+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTimeZone+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTimeZone (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTimeZone, NSTimeZone *);
TF_EC_MINSTANCE_IMP(NSTimeZone, NSTimeZone *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSTimeZone ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSTimeZone);


@end