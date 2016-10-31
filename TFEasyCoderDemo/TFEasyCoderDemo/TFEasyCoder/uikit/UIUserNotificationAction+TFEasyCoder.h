//
//  UIUserNotificationAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIUserNotificationAction,UIUserNotificationAction *);

@interface UIUserNotificationAction (TFEasyCoder)

TF_EC_MSTATIC_INT(UIUserNotificationAction, UIUserNotificationAction *);
TF_EC_MINSTANCE_INT(UIUserNotificationAction,UIUserNotificationAction *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIUserNotificationAction ,long long,accessibilityNavigationStyle)





@end