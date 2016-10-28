//
//  UIMutableUserNotificationCategory+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMutableUserNotificationCategory,UIMutableUserNotificationCategory *);

@interface UIMutableUserNotificationCategory (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMutableUserNotificationCategory, UIMutableUserNotificationCategory *);
TF_EC_MINSTANCE_INT(UIMutableUserNotificationCategory,UIMutableUserNotificationCategory *);


TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,NSString *,identifier);

@end