//
//  UIMutableApplicationShortcutItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMutableApplicationShortcutItem,UIMutableApplicationShortcutItem *);

@interface UIMutableApplicationShortcutItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMutableApplicationShortcutItem, UIMutableApplicationShortcutItem *);
TF_EC_MINSTANCE_INT(UIMutableApplicationShortcutItem,UIMutableApplicationShortcutItem *);


TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSString *,type);
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSString *,localizedTitle);
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSString *,localizedSubtitle);
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,UIApplicationShortcutIcon *,icon);
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSDictionary *,userInfo);





//superclass pros UIApplicationShortcutItem
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIMutableApplicationShortcutItem ,long long,accessibilityNavigationStyle)





@end