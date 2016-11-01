//
//  UIUserNotificationAction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIUserNotificationAction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIUserNotificationAction (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIUserNotificationAction, UIUserNotificationAction *);
TF_EC_MINSTANCE_IMP(UIUserNotificationAction, UIUserNotificationAction *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationAction ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIUserNotificationAction);


@end