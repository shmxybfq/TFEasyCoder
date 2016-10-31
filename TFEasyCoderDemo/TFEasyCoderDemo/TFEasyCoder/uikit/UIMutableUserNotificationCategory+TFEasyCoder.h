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




//superclass pros UIUserNotificationCategory
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIMutableUserNotificationCategory ,long long,accessibilityNavigationStyle)





@end