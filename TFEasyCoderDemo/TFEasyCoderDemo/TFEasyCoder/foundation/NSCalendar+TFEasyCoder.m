//
//  NSCalendar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCalendar+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCalendar (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCalendar, NSCalendar *);
TF_EC_MINSTANCE_IMP(NSCalendar, NSCalendar *);


TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSLocale *,locale)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,unsigned long long,firstWeekday)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,unsigned long long,minimumDaysInFirstWeek)

@end