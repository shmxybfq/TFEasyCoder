//
//  UILocalNotification+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILocalNotification+TFEasyCoder.h"


@implementation UILocalNotification (TFEasyCoder)





-(UILocalNotification  *(^)(NSDate *  fireDate))set_fireDate{
    __weak typeof(self) weakSelf = self;
    return ^(NSDate *  fireDate){
        weakSelf.fireDate = fireDate;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSTimeZone *  timeZone))set_timeZone{
    __weak typeof(self) weakSelf = self;
    return ^(NSTimeZone *  timeZone){
        weakSelf.timeZone = timeZone;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(unsigned long long  repeatInterval))set_repeatInterval{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  repeatInterval){
        weakSelf.repeatInterval = repeatInterval;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSCalendar *  repeatCalendar))set_repeatCalendar{
    __weak typeof(self) weakSelf = self;
    return ^(NSCalendar *  repeatCalendar){
        weakSelf.repeatCalendar = repeatCalendar;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(BOOL  regionTriggersOnce))set_regionTriggersOnce{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  regionTriggersOnce){
        weakSelf.regionTriggersOnce = regionTriggersOnce;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  alertBody))set_alertBody{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  alertBody){
        weakSelf.alertBody = alertBody;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(BOOL  hasAction))set_hasAction{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hasAction){
        weakSelf.hasAction = hasAction;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  alertAction))set_alertAction{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  alertAction){
        weakSelf.alertAction = alertAction;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  alertLaunchImage))set_alertLaunchImage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  alertLaunchImage){
        weakSelf.alertLaunchImage = alertLaunchImage;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  alertTitle))set_alertTitle{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  alertTitle){
        weakSelf.alertTitle = alertTitle;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  soundName))set_soundName{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  soundName){
        weakSelf.soundName = soundName;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(long long  applicationIconBadgeNumber))set_applicationIconBadgeNumber{
    __weak typeof(self) weakSelf = self;
    return ^(long long  applicationIconBadgeNumber){
        weakSelf.applicationIconBadgeNumber = applicationIconBadgeNumber;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSDictionary *  userInfo))set_userInfo{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  userInfo){
        weakSelf.userInfo = userInfo;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  category))set_category{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  category){
        weakSelf.category = category;
        return weakSelf;
    };
}






//superclass pros NSObject
-(UILocalNotification  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UILocalNotification  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end