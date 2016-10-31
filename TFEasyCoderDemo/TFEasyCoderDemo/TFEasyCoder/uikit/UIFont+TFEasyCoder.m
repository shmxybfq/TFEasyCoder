//
//  UIFont+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIFont+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIFont (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIFont, UIFont *);
TF_EC_MINSTANCE_IMP(UIFont, UIFont *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIFont ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIFont ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIFont ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIFont ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIFont ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIFont ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIFont ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIFont ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIFont ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIFont ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIFont ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIFont ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIFont ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIFont ,long long,accessibilityNavigationStyle)





@end