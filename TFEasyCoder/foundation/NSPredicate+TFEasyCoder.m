//
//  NSPredicate+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPredicate+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPredicate (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPredicate, NSPredicate *);
TF_EC_MINSTANCE_IMP(NSPredicate, NSPredicate *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSPredicate ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSPredicate ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSPredicate);


@end