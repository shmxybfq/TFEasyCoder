//
//  UIUserNotificationSettings+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIUserNotificationSettings,UIUserNotificationSettings *);

@interface UIUserNotificationSettings (TFEasyCoder)

TF_EC_MSTATIC_INT(UIUserNotificationSettings, UIUserNotificationSettings *);
TF_EC_MINSTANCE_INT(UIUserNotificationSettings,UIUserNotificationSettings *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIUserNotificationSettings ,long long,accessibilityNavigationStyle)





@end