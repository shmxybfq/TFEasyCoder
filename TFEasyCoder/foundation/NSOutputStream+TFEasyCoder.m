//
//  NSOutputStream+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSOutputStream+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSOutputStream (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSOutputStream, NSOutputStream *);
TF_EC_MINSTANCE_IMP(NSOutputStream, NSOutputStream *);






//superclass pros NSStream
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,id<NSStreamDelegate>  ,delegate)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSOutputStream ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSOutputStream);


@end