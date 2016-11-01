//
//  UIApplicationShortcutItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIApplicationShortcutItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIApplicationShortcutItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIApplicationShortcutItem, UIApplicationShortcutItem *);
TF_EC_MINSTANCE_IMP(UIApplicationShortcutItem, UIApplicationShortcutItem *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIApplicationShortcutItem);


@end