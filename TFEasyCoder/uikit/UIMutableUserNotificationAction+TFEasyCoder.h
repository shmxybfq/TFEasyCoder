//
//  UIMutableUserNotificationAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMutableUserNotificationAction,UIMutableUserNotificationAction *);

@interface UIMutableUserNotificationAction (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMutableUserNotificationAction, UIMutableUserNotificationAction *);
TF_EC_MINSTANCE_INT(UIMutableUserNotificationAction,UIMutableUserNotificationAction *);


TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,NSString *,identifier);
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,unsigned long long,behavior);
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,NSDictionary *,parameters);
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,unsigned long long,activationMode);
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,BOOL,destructive);




//superclass pros UIUserNotificationAction
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationAction ,long long,accessibilityNavigationStyle)





@end