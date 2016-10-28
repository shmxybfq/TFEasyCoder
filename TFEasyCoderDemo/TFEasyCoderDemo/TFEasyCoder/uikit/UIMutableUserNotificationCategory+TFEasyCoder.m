//
//  UIMutableUserNotificationCategory+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMutableUserNotificationCategory+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMutableUserNotificationCategory (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMutableUserNotificationCategory, UIMutableUserNotificationCategory *);
TF_EC_MINSTANCE_IMP(UIMutableUserNotificationCategory, UIMutableUserNotificationCategory *);


TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,NSString *,identifier)

@end