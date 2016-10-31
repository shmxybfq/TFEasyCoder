//
//  UIApplicationShortcutItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIApplicationShortcutItem,UIApplicationShortcutItem *);

@interface UIApplicationShortcutItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UIApplicationShortcutItem, UIApplicationShortcutItem *);
TF_EC_MINSTANCE_INT(UIApplicationShortcutItem,UIApplicationShortcutItem *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutItem ,long long,accessibilityNavigationStyle)





@end