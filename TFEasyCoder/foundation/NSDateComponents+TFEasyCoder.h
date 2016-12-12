//
//  NSDateComponents+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDateComponents (TFEasyCoder)





-(NSDateComponents  *(^)(NSCalendar *  calendar))set_calendar;
-(NSDateComponents  *(^)(NSTimeZone *  timeZone))set_timeZone;
-(NSDateComponents  *(^)(long long  era))set_era;
-(NSDateComponents  *(^)(long long  year))set_year;
-(NSDateComponents  *(^)(long long  month))set_month;
-(NSDateComponents  *(^)(long long  day))set_day;
-(NSDateComponents  *(^)(long long  hour))set_hour;
-(NSDateComponents  *(^)(long long  minute))set_minute;
-(NSDateComponents  *(^)(long long  second))set_second;
-(NSDateComponents  *(^)(long long  nanosecond))set_nanosecond;
-(NSDateComponents  *(^)(long long  weekday))set_weekday;
-(NSDateComponents  *(^)(long long  weekdayOrdinal))set_weekdayOrdinal;
-(NSDateComponents  *(^)(long long  quarter))set_quarter;
-(NSDateComponents  *(^)(long long  weekOfMonth))set_weekOfMonth;
-(NSDateComponents  *(^)(long long  weekOfYear))set_weekOfYear;
-(NSDateComponents  *(^)(long long  yearForWeekOfYear))set_yearForWeekOfYear;
-(NSDateComponents  *(^)(BOOL  leapMonth))set_leapMonth;




//superclass pros NSObject
-(NSDateComponents  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDateComponents  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDateComponents  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDateComponents  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDateComponents  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDateComponents  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDateComponents  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDateComponents  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDateComponents  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDateComponents  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDateComponents  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDateComponents  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDateComponents  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDateComponents  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end