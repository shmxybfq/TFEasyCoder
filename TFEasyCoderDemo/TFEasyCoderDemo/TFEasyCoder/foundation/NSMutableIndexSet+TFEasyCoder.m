//
//  NSMutableIndexSet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableIndexSet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableIndexSet (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableIndexSet, NSMutableIndexSet *);
TF_EC_MINSTANCE_IMP(NSMutableIndexSet, NSMutableIndexSet *);






//superclass pros NSIndexSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableIndexSet ,long long,accessibilityNavigationStyle)





@end