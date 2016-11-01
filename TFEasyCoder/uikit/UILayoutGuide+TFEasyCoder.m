//
//  UILayoutGuide+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILayoutGuide+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UILayoutGuide (TFEasyCoder)

TF_EC_MSTATIC_IMP(UILayoutGuide, UILayoutGuide *);
TF_EC_MINSTANCE_IMP(UILayoutGuide, UILayoutGuide *);


TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,UIView *,owningView)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,NSString *,identifier)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UILayoutGuide ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UILayoutGuide);


@end