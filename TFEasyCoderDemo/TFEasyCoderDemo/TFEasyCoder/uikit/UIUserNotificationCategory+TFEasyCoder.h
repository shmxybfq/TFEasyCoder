//
//  UIUserNotificationCategory+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIUserNotificationCategory,UIUserNotificationCategory *);

@interface UIUserNotificationCategory (TFEasyCoder)

TF_EC_MSTATIC_INT(UIUserNotificationCategory, UIUserNotificationCategory *);
TF_EC_MINSTANCE_INT(UIUserNotificationCategory,UIUserNotificationCategory *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIUserNotificationCategory ,long long,accessibilityNavigationStyle)





@end