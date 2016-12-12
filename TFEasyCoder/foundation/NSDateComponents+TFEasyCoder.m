//
//  NSDateComponents+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDateComponents+TFEasyCoder.h"


@implementation NSDateComponents (TFEasyCoder)





-(NSDateComponents  *(^)(NSCalendar *  calendar))set_calendar{
    __weak typeof(self) weakSelf = self;
    return ^(NSCalendar *  calendar){
        weakSelf.calendar = calendar;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(NSTimeZone *  timeZone))set_timeZone{
    __weak typeof(self) weakSelf = self;
    return ^(NSTimeZone *  timeZone){
        weakSelf.timeZone = timeZone;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  era))set_era{
    __weak typeof(self) weakSelf = self;
    return ^(long long  era){
        weakSelf.era = era;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  year))set_year{
    __weak typeof(self) weakSelf = self;
    return ^(long long  year){
        weakSelf.year = year;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  month))set_month{
    __weak typeof(self) weakSelf = self;
    return ^(long long  month){
        weakSelf.month = month;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  day))set_day{
    __weak typeof(self) weakSelf = self;
    return ^(long long  day){
        weakSelf.day = day;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  hour))set_hour{
    __weak typeof(self) weakSelf = self;
    return ^(long long  hour){
        weakSelf.hour = hour;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  minute))set_minute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  minute){
        weakSelf.minute = minute;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  second))set_second{
    __weak typeof(self) weakSelf = self;
    return ^(long long  second){
        weakSelf.second = second;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  nanosecond))set_nanosecond{
    __weak typeof(self) weakSelf = self;
    return ^(long long  nanosecond){
        weakSelf.nanosecond = nanosecond;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  weekday))set_weekday{
    __weak typeof(self) weakSelf = self;
    return ^(long long  weekday){
        weakSelf.weekday = weekday;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  weekdayOrdinal))set_weekdayOrdinal{
    __weak typeof(self) weakSelf = self;
    return ^(long long  weekdayOrdinal){
        weakSelf.weekdayOrdinal = weekdayOrdinal;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  quarter))set_quarter{
    __weak typeof(self) weakSelf = self;
    return ^(long long  quarter){
        weakSelf.quarter = quarter;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  weekOfMonth))set_weekOfMonth{
    __weak typeof(self) weakSelf = self;
    return ^(long long  weekOfMonth){
        weakSelf.weekOfMonth = weekOfMonth;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  weekOfYear))set_weekOfYear{
    __weak typeof(self) weakSelf = self;
    return ^(long long  weekOfYear){
        weakSelf.weekOfYear = weekOfYear;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  yearForWeekOfYear))set_yearForWeekOfYear{
    __weak typeof(self) weakSelf = self;
    return ^(long long  yearForWeekOfYear){
        weakSelf.yearForWeekOfYear = yearForWeekOfYear;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(BOOL  leapMonth))set_leapMonth{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  leapMonth){
        weakSelf.leapMonth = leapMonth;
        return weakSelf;
    };
}





//superclass pros NSObject
-(NSDateComponents  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSDateComponents  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end