//
//  NSComparisonPredicate+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSComparisonPredicate+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSComparisonPredicate (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSComparisonPredicate, NSComparisonPredicate *);
TF_EC_MINSTANCE_IMP(NSComparisonPredicate, NSComparisonPredicate *);






//superclass pros NSPredicate
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSComparisonPredicate ,long long,accessibilityNavigationStyle)





@end