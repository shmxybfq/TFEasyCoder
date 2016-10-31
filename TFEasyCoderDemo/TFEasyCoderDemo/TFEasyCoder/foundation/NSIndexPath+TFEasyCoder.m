//
//  NSIndexPath+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSIndexPath+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSIndexPath (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSIndexPath, NSIndexPath *);
TF_EC_MINSTANCE_IMP(NSIndexPath, NSIndexPath *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSIndexPath ,long long,accessibilityNavigationStyle)





@end