//
//  UIMutableUserNotificationAction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMutableUserNotificationAction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMutableUserNotificationAction (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMutableUserNotificationAction, UIMutableUserNotificationAction *);
TF_EC_MINSTANCE_IMP(UIMutableUserNotificationAction, UIMutableUserNotificationAction *);


TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,NSString *,identifier)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,unsigned long long,behavior)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,NSDictionary *,parameters)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,unsigned long long,activationMode)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,BOOL,destructive)

@end