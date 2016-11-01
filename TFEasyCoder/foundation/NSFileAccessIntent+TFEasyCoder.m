//
//  NSFileAccessIntent+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFileAccessIntent+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFileAccessIntent (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFileAccessIntent, NSFileAccessIntent *);
TF_EC_MINSTANCE_IMP(NSFileAccessIntent, NSFileAccessIntent *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSFileAccessIntent ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSFileAccessIntent);


@end