//
//  NSDateFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDateFormatter (TFEasyCoder)





-(NSDateFormatter  *(^)(long long  formattingContext))set_formattingContext;
-(NSDateFormatter  *(^)(NSString *  dateFormat))set_dateFormat;
-(NSDateFormatter  *(^)(unsigned long long  dateStyle))set_dateStyle;
-(NSDateFormatter  *(^)(unsigned long long  timeStyle))set_timeStyle;
-(NSDateFormatter  *(^)(NSLocale *  locale))set_locale;
-(NSDateFormatter  *(^)(BOOL  generatesCalendarDates))set_generatesCalendarDates;
-(NSDateFormatter  *(^)(unsigned long long  formatterBehavior))set_formatterBehavior;
-(NSDateFormatter  *(^)(NSTimeZone *  timeZone))set_timeZone;
-(NSDateFormatter  *(^)(NSCalendar *  calendar))set_calendar;
-(NSDateFormatter  *(^)(BOOL  lenient))set_lenient;
-(NSDateFormatter  *(^)(NSDate *  twoDigitStartDate))set_twoDigitStartDate;
-(NSDateFormatter  *(^)(NSDate *  defaultDate))set_defaultDate;
-(NSDateFormatter  *(^)(NSArray *  eraSymbols))set_eraSymbols;
-(NSDateFormatter  *(^)(NSArray *  monthSymbols))set_monthSymbols;
-(NSDateFormatter  *(^)(NSArray *  shortMonthSymbols))set_shortMonthSymbols;
-(NSDateFormatter  *(^)(NSArray *  weekdaySymbols))set_weekdaySymbols;
-(NSDateFormatter  *(^)(NSArray *  shortWeekdaySymbols))set_shortWeekdaySymbols;
-(NSDateFormatter  *(^)(NSString *  AMSymbol))set_AMSymbol;
-(NSDateFormatter  *(^)(NSString *  PMSymbol))set_PMSymbol;
-(NSDateFormatter  *(^)(NSArray *  longEraSymbols))set_longEraSymbols;
-(NSDateFormatter  *(^)(NSArray *  veryShortMonthSymbols))set_veryShortMonthSymbols;
-(NSDateFormatter  *(^)(NSArray *  standaloneMonthSymbols))set_standaloneMonthSymbols;
-(NSDateFormatter  *(^)(NSArray *  shortStandaloneMonthSymbols))set_shortStandaloneMonthSymbols;
-(NSDateFormatter  *(^)(NSArray *  veryShortStandaloneMonthSymbols))set_veryShortStandaloneMonthSymbols;
-(NSDateFormatter  *(^)(NSArray *  veryShortWeekdaySymbols))set_veryShortWeekdaySymbols;
-(NSDateFormatter  *(^)(NSArray *  standaloneWeekdaySymbols))set_standaloneWeekdaySymbols;
-(NSDateFormatter  *(^)(NSArray *  shortStandaloneWeekdaySymbols))set_shortStandaloneWeekdaySymbols;
-(NSDateFormatter  *(^)(NSArray *  veryShortStandaloneWeekdaySymbols))set_veryShortStandaloneWeekdaySymbols;
-(NSDateFormatter  *(^)(NSArray *  quarterSymbols))set_quarterSymbols;
-(NSDateFormatter  *(^)(NSArray *  shortQuarterSymbols))set_shortQuarterSymbols;
-(NSDateFormatter  *(^)(NSArray *  standaloneQuarterSymbols))set_standaloneQuarterSymbols;
-(NSDateFormatter  *(^)(NSArray *  shortStandaloneQuarterSymbols))set_shortStandaloneQuarterSymbols;
-(NSDateFormatter  *(^)(NSDate *  gregorianStartDate))set_gregorianStartDate;
-(NSDateFormatter  *(^)(BOOL  doesRelativeDateFormatting))set_doesRelativeDateFormatting;




//superclass pros NSFormatter
//superclass pros NSObject
-(NSDateFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDateFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDateFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDateFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDateFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDateFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDateFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDateFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDateFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDateFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDateFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDateFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDateFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDateFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end