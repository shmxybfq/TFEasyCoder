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



@end