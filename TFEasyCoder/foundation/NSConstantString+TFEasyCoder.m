//
//  NSConstantString+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSConstantString+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSConstantString (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSConstantString, NSConstantString *);
TF_EC_MINSTANCE_IMP(NSConstantString, NSConstantString *);






//superclass pros NSSimpleCString
//superclass pros NSString
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSConstantString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSConstantString ,long long,accessibilityNavigationStyle)





@end