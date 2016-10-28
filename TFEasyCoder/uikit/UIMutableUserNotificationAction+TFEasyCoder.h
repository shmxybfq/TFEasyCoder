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

@end