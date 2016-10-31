//
//  UIMutableApplicationShortcutItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMutableApplicationShortcutItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMutableApplicationShortcutItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMutableApplicationShortcutItem, UIMutableApplicationShortcutItem *);
TF_EC_MINSTANCE_IMP(UIMutableApplicationShortcutItem, UIMutableApplicationShortcutItem *);


TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,type)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,localizedTitle)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,localizedSubtitle)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,UIApplicationShortcutIcon *,icon)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSDictionary *,userInfo)





//superclass pros UIApplicationShortcutItem
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,long long,accessibilityNavigationStyle)





@end