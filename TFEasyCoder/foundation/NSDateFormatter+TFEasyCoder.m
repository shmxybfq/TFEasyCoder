//
//  NSDateFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDateFormatter+TFEasyCoder.h"


@implementation NSDateFormatter (TFEasyCoder)





-(NSDateFormatter  *(^)(long long  formattingContext))set_formattingContext{
    __weak typeof(self) weakSelf = self;
    return ^(long long  formattingContext){
        weakSelf.formattingContext = formattingContext;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSString *  dateFormat))set_dateFormat{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  dateFormat){
        weakSelf.dateFormat = dateFormat;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(unsigned long long  dateStyle))set_dateStyle{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  dateStyle){
        weakSelf.dateStyle = dateStyle;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(unsigned long long  timeStyle))set_timeStyle{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  timeStyle){
        weakSelf.timeStyle = timeStyle;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSLocale *  locale))set_locale{
    __weak typeof(self) weakSelf = self;
    return ^(NSLocale *  locale){
        weakSelf.locale = locale;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(BOOL  generatesCalendarDates))set_generatesCalendarDates{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  generatesCalendarDates){
        weakSelf.generatesCalendarDates = generatesCalendarDates;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(unsigned long long  formatterBehavior))set_formatterBehavior{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  formatterBehavior){
        weakSelf.formatterBehavior = formatterBehavior;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSTimeZone *  timeZone))set_timeZone{
    __weak typeof(self) weakSelf = self;
    return ^(NSTimeZone *  timeZone){
        weakSelf.timeZone = timeZone;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSCalendar *  calendar))set_calendar{
    __weak typeof(self) weakSelf = self;
    return ^(NSCalendar *  calendar){
        weakSelf.calendar = calendar;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(BOOL  lenient))set_lenient{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  lenient){
        weakSelf.lenient = lenient;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSDate *  twoDigitStartDate))set_twoDigitStartDate{
    __weak typeof(self) weakSelf = self;
    return ^(NSDate *  twoDigitStartDate){
        weakSelf.twoDigitStartDate = twoDigitStartDate;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSDate *  defaultDate))set_defaultDate{
    __weak typeof(self) weakSelf = self;
    return ^(NSDate *  defaultDate){
        weakSelf.defaultDate = defaultDate;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  eraSymbols))set_eraSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  eraSymbols){
        weakSelf.eraSymbols = eraSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  monthSymbols))set_monthSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  monthSymbols){
        weakSelf.monthSymbols = monthSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  shortMonthSymbols))set_shortMonthSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  shortMonthSymbols){
        weakSelf.shortMonthSymbols = shortMonthSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  weekdaySymbols))set_weekdaySymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  weekdaySymbols){
        weakSelf.weekdaySymbols = weekdaySymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  shortWeekdaySymbols))set_shortWeekdaySymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  shortWeekdaySymbols){
        weakSelf.shortWeekdaySymbols = shortWeekdaySymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSString *  AMSymbol))set_AMSymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  AMSymbol){
        weakSelf.AMSymbol = AMSymbol;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSString *  PMSymbol))set_PMSymbol{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  PMSymbol){
        weakSelf.PMSymbol = PMSymbol;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  longEraSymbols))set_longEraSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  longEraSymbols){
        weakSelf.longEraSymbols = longEraSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  veryShortMonthSymbols))set_veryShortMonthSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  veryShortMonthSymbols){
        weakSelf.veryShortMonthSymbols = veryShortMonthSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  standaloneMonthSymbols))set_standaloneMonthSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  standaloneMonthSymbols){
        weakSelf.standaloneMonthSymbols = standaloneMonthSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  shortStandaloneMonthSymbols))set_shortStandaloneMonthSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  shortStandaloneMonthSymbols){
        weakSelf.shortStandaloneMonthSymbols = shortStandaloneMonthSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  veryShortStandaloneMonthSymbols))set_veryShortStandaloneMonthSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  veryShortStandaloneMonthSymbols){
        weakSelf.veryShortStandaloneMonthSymbols = veryShortStandaloneMonthSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  veryShortWeekdaySymbols))set_veryShortWeekdaySymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  veryShortWeekdaySymbols){
        weakSelf.veryShortWeekdaySymbols = veryShortWeekdaySymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  standaloneWeekdaySymbols))set_standaloneWeekdaySymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  standaloneWeekdaySymbols){
        weakSelf.standaloneWeekdaySymbols = standaloneWeekdaySymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  shortStandaloneWeekdaySymbols))set_shortStandaloneWeekdaySymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  shortStandaloneWeekdaySymbols){
        weakSelf.shortStandaloneWeekdaySymbols = shortStandaloneWeekdaySymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  veryShortStandaloneWeekdaySymbols))set_veryShortStandaloneWeekdaySymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  veryShortStandaloneWeekdaySymbols){
        weakSelf.veryShortStandaloneWeekdaySymbols = veryShortStandaloneWeekdaySymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  quarterSymbols))set_quarterSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  quarterSymbols){
        weakSelf.quarterSymbols = quarterSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  shortQuarterSymbols))set_shortQuarterSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  shortQuarterSymbols){
        weakSelf.shortQuarterSymbols = shortQuarterSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  standaloneQuarterSymbols))set_standaloneQuarterSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  standaloneQuarterSymbols){
        weakSelf.standaloneQuarterSymbols = standaloneQuarterSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  shortStandaloneQuarterSymbols))set_shortStandaloneQuarterSymbols{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  shortStandaloneQuarterSymbols){
        weakSelf.shortStandaloneQuarterSymbols = shortStandaloneQuarterSymbols;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSDate *  gregorianStartDate))set_gregorianStartDate{
    __weak typeof(self) weakSelf = self;
    return ^(NSDate *  gregorianStartDate){
        weakSelf.gregorianStartDate = gregorianStartDate;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(BOOL  doesRelativeDateFormatting))set_doesRelativeDateFormatting{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  doesRelativeDateFormatting){
        weakSelf.doesRelativeDateFormatting = doesRelativeDateFormatting;
        return weakSelf;
    };
}





//superclass pros NSFormatter
//superclass pros NSObject
-(NSDateFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSDateFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end