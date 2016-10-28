//
//  NSDateComponents+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDateComponents+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSDateComponents (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSDateComponents, NSDateComponents *);
TF_EC_MINSTANCE_IMP(NSDateComponents, NSDateComponents *);


TF_EC_CHAIN_PROP_IMP(NSDateComponents ,NSCalendar *,calendar)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,era)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,year)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,month)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,day)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,hour)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,minute)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,second)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,nanosecond)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,weekday)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,weekdayOrdinal)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,quarter)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,weekOfMonth)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,weekOfYear)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,long long,yearForWeekOfYear)
TF_EC_CHAIN_PROP_IMP(NSDateComponents ,BOOL,leapMonth)

@end