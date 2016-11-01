//
//  UILocalNotification+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILocalNotification+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UILocalNotification (TFEasyCoder)

TF_EC_MSTATIC_IMP(UILocalNotification, UILocalNotification *);
TF_EC_MINSTANCE_IMP(UILocalNotification, UILocalNotification *);


TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSDate *,fireDate)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,unsigned long long,repeatInterval)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSCalendar *,repeatCalendar)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,BOOL,regionTriggersOnce)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,alertBody)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,BOOL,hasAction)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,alertAction)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,alertLaunchImage)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,alertTitle)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,soundName)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,long long,applicationIconBadgeNumber)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSDictionary *,userInfo)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,category)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UILocalNotification ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UILocalNotification);


@end