//
//  NSCoder+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCoder+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCoder (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCoder, NSCoder *);
TF_EC_MINSTANCE_IMP(NSCoder, NSCoder *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSCoder ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSCoder ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSCoder ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSCoder ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSCoder ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSCoder ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSCoder ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSCoder ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSCoder ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSCoder ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSCoder ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSCoder ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSCoder ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSCoder ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSCoder);


@end