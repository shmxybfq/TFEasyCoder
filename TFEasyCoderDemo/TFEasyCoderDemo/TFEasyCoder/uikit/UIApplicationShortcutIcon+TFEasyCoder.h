//
//  UIApplicationShortcutIcon+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIApplicationShortcutIcon,UIApplicationShortcutIcon *);

@interface UIApplicationShortcutIcon (TFEasyCoder)

TF_EC_MSTATIC_INT(UIApplicationShortcutIcon, UIApplicationShortcutIcon *);
TF_EC_MINSTANCE_INT(UIApplicationShortcutIcon,UIApplicationShortcutIcon *);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIApplicationShortcutIcon ,long long,accessibilityNavigationStyle)





@end