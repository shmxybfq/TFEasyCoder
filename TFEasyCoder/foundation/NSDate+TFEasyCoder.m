//
//  NSDate+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDate+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSDate (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSDate, NSDate *);
TF_EC_MINSTANCE_IMP(NSDate, NSDate *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSDate ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSDate ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSDate ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSDate ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSDate ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSDate ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSDate ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSDate ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSDate ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSDate ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSDate ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSDate ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSDate ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSDate ,long long,accessibilityNavigationStyle)





@end