//
//  UIMotionEffect+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMotionEffect+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMotionEffect (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMotionEffect, UIMotionEffect *);
TF_EC_MINSTANCE_IMP(UIMotionEffect, UIMotionEffect *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIMotionEffect ,long long,accessibilityNavigationStyle)





@end