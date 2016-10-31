//
//  UIVibrancyEffect+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIVibrancyEffect+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIVibrancyEffect (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIVibrancyEffect, UIVibrancyEffect *);
TF_EC_MINSTANCE_IMP(UIVibrancyEffect, UIVibrancyEffect *);






//superclass pros UIVisualEffect
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIVibrancyEffect ,long long,accessibilityNavigationStyle)





@end