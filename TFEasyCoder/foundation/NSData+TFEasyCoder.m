//
//  NSData+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSData+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSData (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSData, NSData *);
TF_EC_MINSTANCE_IMP(NSData, NSData *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSData ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSData ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSData ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSData ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSData ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSData ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSData ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSData ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSData ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSData ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSData ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSData ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSData ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSData ,long long,accessibilityNavigationStyle)





@end