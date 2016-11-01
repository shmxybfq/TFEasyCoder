//
//  NSNumber+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNumber+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNumber (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNumber, NSNumber *);
TF_EC_MINSTANCE_IMP(NSNumber, NSNumber *);






//superclass pros NSValue
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSNumber ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSNumber ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSNumber ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSNumber ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSNumber ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSNumber ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSNumber ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSNumber ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSNumber ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSNumber ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSNumber ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSNumber ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSNumber ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSNumber ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSNumber);


@end