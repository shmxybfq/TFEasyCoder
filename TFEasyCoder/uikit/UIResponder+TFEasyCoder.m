//
//  UIResponder+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIResponder+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIResponder (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIResponder, UIResponder *);
TF_EC_MINSTANCE_IMP(UIResponder, UIResponder *);


TF_EC_CHAIN_PROP_IMP(UIResponder ,NSUserActivity *,userActivity)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIResponder ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIResponder ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIResponder ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIResponder ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIResponder ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIResponder ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIResponder ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIResponder ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIResponder ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIResponder ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIResponder ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIResponder ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIResponder ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIResponder ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIResponder);


@end