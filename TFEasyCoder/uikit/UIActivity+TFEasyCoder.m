//
//  UIActivity+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIActivity+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIActivity (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIActivity, UIActivity *);
TF_EC_MINSTANCE_IMP(UIActivity, UIActivity *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIActivity ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIActivity ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIActivity ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIActivity ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIActivity ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIActivity ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIActivity ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIActivity ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIActivity ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIActivity ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIActivity ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIActivity ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIActivity ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIActivity ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIActivity);


@end