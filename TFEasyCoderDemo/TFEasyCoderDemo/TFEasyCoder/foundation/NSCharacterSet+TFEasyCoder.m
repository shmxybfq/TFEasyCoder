//
//  NSCharacterSet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCharacterSet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCharacterSet (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCharacterSet, NSCharacterSet *);
TF_EC_MINSTANCE_IMP(NSCharacterSet, NSCharacterSet *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSCharacterSet ,long long,accessibilityNavigationStyle)





@end