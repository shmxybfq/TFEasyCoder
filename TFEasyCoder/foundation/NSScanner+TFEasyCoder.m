//
//  NSScanner+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSScanner+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSScanner (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSScanner, NSScanner *);
TF_EC_MINSTANCE_IMP(NSScanner, NSScanner *);


TF_EC_CHAIN_PROP_IMP(NSScanner ,unsigned long long,scanLocation)
TF_EC_CHAIN_PROP_IMP(NSScanner ,NSCharacterSet *,charactersToBeSkipped)
TF_EC_CHAIN_PROP_IMP(NSScanner ,BOOL,caseSensitive)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSScanner ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSScanner ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSScanner ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSScanner ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSScanner ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSScanner ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSScanner ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSScanner ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSScanner ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSScanner ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSScanner ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSScanner ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSScanner ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSScanner ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSScanner);


@end