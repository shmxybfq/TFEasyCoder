//
//  UILocalNotification+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UILocalNotification (TFEasyCoder)





-(UILocalNotification  *(^)(NSDate *  fireDate))set_fireDate;
-(UILocalNotification  *(^)(NSTimeZone *  timeZone))set_timeZone;
-(UILocalNotification  *(^)(unsigned long long  repeatInterval))set_repeatInterval;
-(UILocalNotification  *(^)(NSCalendar *  repeatCalendar))set_repeatCalendar;
-(UILocalNotification  *(^)(BOOL  regionTriggersOnce))set_regionTriggersOnce;
-(UILocalNotification  *(^)(NSString *  alertBody))set_alertBody;
-(UILocalNotification  *(^)(BOOL  hasAction))set_hasAction;
-(UILocalNotification  *(^)(NSString *  alertAction))set_alertAction;
-(UILocalNotification  *(^)(NSString *  alertLaunchImage))set_alertLaunchImage;
-(UILocalNotification  *(^)(NSString *  alertTitle))set_alertTitle;
-(UILocalNotification  *(^)(NSString *  soundName))set_soundName;
-(UILocalNotification  *(^)(long long  applicationIconBadgeNumber))set_applicationIconBadgeNumber;
-(UILocalNotification  *(^)(NSDictionary *  userInfo))set_userInfo;
-(UILocalNotification  *(^)(NSString *  category))set_category;





//superclass pros NSObject
-(UILocalNotification  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UILocalNotification  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UILocalNotification  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UILocalNotification  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UILocalNotification  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UILocalNotification  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UILocalNotification  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UILocalNotification  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UILocalNotification  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UILocalNotification  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UILocalNotification  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UILocalNotification  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UILocalNotification  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UILocalNotification  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end