//
//  NSException+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSException+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSException (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSException, NSException *);
TF_EC_MINSTANCE_IMP(NSException, NSException *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSException ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSException ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSException ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSException ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSException ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSException ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSException ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSException ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSException ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSException ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSException ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSException ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSException ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSException ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSException);


@end