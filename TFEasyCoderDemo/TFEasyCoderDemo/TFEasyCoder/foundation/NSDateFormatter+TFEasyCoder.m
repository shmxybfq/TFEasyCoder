//
//  NSDateFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDateFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSDateFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSDateFormatter, NSDateFormatter *);
TF_EC_MINSTANCE_IMP(NSDateFormatter, NSDateFormatter *);


TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,long long,formattingContext)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSString *,dateFormat)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,unsigned long long,dateStyle)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,unsigned long long,timeStyle)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSLocale *,locale)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,BOOL,generatesCalendarDates)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,unsigned long long,formatterBehavior)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSCalendar *,calendar)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,BOOL,lenient)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSDate *,twoDigitStartDate)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSDate *,defaultDate)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,eraSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,monthSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,shortMonthSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,weekdaySymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,shortWeekdaySymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSString *,AMSymbol)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSString *,PMSymbol)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,longEraSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,veryShortMonthSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,standaloneMonthSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,shortStandaloneMonthSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,veryShortStandaloneMonthSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,veryShortWeekdaySymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,standaloneWeekdaySymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,shortStandaloneWeekdaySymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,veryShortStandaloneWeekdaySymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,quarterSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,shortQuarterSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,standaloneQuarterSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSArray *,shortStandaloneQuarterSymbols)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,NSDate *,gregorianStartDate)
TF_EC_CHAIN_PROP_IMP(NSDateFormatter ,BOOL,doesRelativeDateFormatting)

@end