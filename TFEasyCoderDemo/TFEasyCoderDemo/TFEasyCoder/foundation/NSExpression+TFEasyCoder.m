//
//  NSExpression+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSExpression+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSExpression (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSExpression, NSExpression *);
TF_EC_MINSTANCE_IMP(NSExpression, NSExpression *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSExpression ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSExpression ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSExpression ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSExpression ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSExpression ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSExpression ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSExpression ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSExpression ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSExpression ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSExpression ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSExpression ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSExpression ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSExpression ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSExpression ,long long,accessibilityNavigationStyle)





@end