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




//superclass pros UIUserNotificationAction
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIMutableUserNotificationAction ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIMutableUserNotificationAction);


@end