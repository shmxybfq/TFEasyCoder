//
//  NSCompoundPredicate+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCompoundPredicate+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCompoundPredicate (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCompoundPredicate, NSCompoundPredicate *);
TF_EC_MINSTANCE_IMP(NSCompoundPredicate, NSCompoundPredicate *);






//superclass pros NSPredicate
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSCompoundPredicate ,long long,accessibilityNavigationStyle)





@end