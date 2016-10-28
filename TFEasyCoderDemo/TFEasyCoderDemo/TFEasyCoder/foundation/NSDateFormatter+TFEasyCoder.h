//
//  NSDateFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDateFormatter,NSDateFormatter *);

@interface NSDateFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDateFormatter, NSDateFormatter *);
TF_EC_MINSTANCE_INT(NSDateFormatter,NSDateFormatter *);


TF_EC_CHAIN_PROP_INT(NSDateFormatter ,long long,formattingContext);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSString *,dateFormat);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,unsigned long long,dateStyle);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,unsigned long long,timeStyle);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSLocale *,locale);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,BOOL,generatesCalendarDates);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,unsigned long long,formatterBehavior);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSTimeZone *,timeZone);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSCalendar *,calendar);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,BOOL,lenient);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSDate *,twoDigitStartDate);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSDate *,defaultDate);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,eraSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,monthSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,shortMonthSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,weekdaySymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,shortWeekdaySymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSString *,AMSymbol);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSString *,PMSymbol);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,longEraSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,veryShortMonthSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,standaloneMonthSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,shortStandaloneMonthSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,veryShortStandaloneMonthSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,veryShortWeekdaySymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,standaloneWeekdaySymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,shortStandaloneWeekdaySymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,veryShortStandaloneWeekdaySymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,quarterSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,shortQuarterSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,standaloneQuarterSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSArray *,shortStandaloneQuarterSymbols);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,NSDate *,gregorianStartDate);
TF_EC_CHAIN_PROP_INT(NSDateFormatter ,BOOL,doesRelativeDateFormatting);

@end