//
//  UIUserNotificationSettings+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIUserNotificationSettings+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIUserNotificationSettings (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIUserNotificationSettings, UIUserNotificationSettings *);
TF_EC_MINSTANCE_IMP(UIUserNotificationSettings, UIUserNotificationSettings *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationSettings ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIUserNotificationSettings);


@end