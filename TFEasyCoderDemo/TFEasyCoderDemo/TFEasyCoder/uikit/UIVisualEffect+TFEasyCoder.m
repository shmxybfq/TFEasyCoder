//
//  UIVisualEffect+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIVisualEffect+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIVisualEffect (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIVisualEffect, UIVisualEffect *);
TF_EC_MINSTANCE_IMP(UIVisualEffect, UIVisualEffect *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIVisualEffect ,long long,accessibilityNavigationStyle)





@end