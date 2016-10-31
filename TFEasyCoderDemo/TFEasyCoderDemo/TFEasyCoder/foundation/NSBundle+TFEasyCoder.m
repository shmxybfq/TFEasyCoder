//
//  NSBundle+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSBundle+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSBundle (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSBundle, NSBundle *);
TF_EC_MINSTANCE_IMP(NSBundle, NSBundle *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSBundle ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSBundle ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSBundle ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSBundle ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSBundle ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSBundle ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSBundle ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSBundle ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSBundle ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSBundle ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSBundle ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSBundle ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSBundle ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSBundle ,long long,accessibilityNavigationStyle)





@end