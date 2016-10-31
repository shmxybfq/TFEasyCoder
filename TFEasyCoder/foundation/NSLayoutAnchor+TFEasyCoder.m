//
//  NSLayoutAnchor+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLayoutAnchor+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSLayoutAnchor (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSLayoutAnchor, NSLayoutAnchor *);
TF_EC_MINSTANCE_IMP(NSLayoutAnchor, NSLayoutAnchor *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSLayoutAnchor ,long long,accessibilityNavigationStyle)





@end