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




//superclass pros UIUserNotificationCategory
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationCategory ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIMutableUserNotificationCategory);


@end