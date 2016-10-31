//
//  UIMenuController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMenuController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMenuController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMenuController, UIMenuController *);
TF_EC_MINSTANCE_IMP(UIMenuController, UIMenuController *);


TF_EC_CHAIN_PROP_IMP(UIMenuController ,BOOL,menuVisible)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,long long,arrowDirection)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,NSArray *,menuItems)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIMenuController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIMenuController ,long long,accessibilityNavigationStyle)





@end