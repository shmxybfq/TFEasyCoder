//
//  UITraitCollection+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITraitCollection+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITraitCollection (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITraitCollection, UITraitCollection *);
TF_EC_MINSTANCE_IMP(UITraitCollection, UITraitCollection *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITraitCollection ,long long,accessibilityNavigationStyle)





@end