//
//  UIApplicationShortcutIcon+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIApplicationShortcutIcon+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIApplicationShortcutIcon (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIApplicationShortcutIcon, UIApplicationShortcutIcon *);
TF_EC_MINSTANCE_IMP(UIApplicationShortcutIcon, UIApplicationShortcutIcon *);





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIApplicationShortcutIcon ,long long,accessibilityNavigationStyle)





@end