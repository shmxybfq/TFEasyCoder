//
//  UIUserNotificationCategory+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIUserNotificationCategory+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIUserNotificationCategory (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIUserNotificationCategory, UIUserNotificationCategory *);
TF_EC_MINSTANCE_IMP(UIUserNotificationCategory, UIUserNotificationCategory *);







//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIUserNotificationCategory ,long long,accessibilityNavigationStyle)





@end