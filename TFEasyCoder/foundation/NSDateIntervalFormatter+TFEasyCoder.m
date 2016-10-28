//
//  NSDateIntervalFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDateIntervalFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSDateIntervalFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSDateIntervalFormatter, NSDateIntervalFormatter *);
TF_EC_MINSTANCE_IMP(NSDateIntervalFormatter, NSDateIntervalFormatter *);


TF_EC_CHAIN_PROP_IMP(NSDateIntervalFormatter ,NSLocale *,locale)
TF_EC_CHAIN_PROP_IMP(NSDateIntervalFormatter ,NSCalendar *,calendar)
TF_EC_CHAIN_PROP_IMP(NSDateIntervalFormatter ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_IMP(NSDateIntervalFormatter ,NSString *,dateTemplate)
TF_EC_CHAIN_PROP_IMP(NSDateIntervalFormatter ,unsigned long long,dateStyle)
TF_EC_CHAIN_PROP_IMP(NSDateIntervalFormatter ,unsigned long long,timeStyle)

@end