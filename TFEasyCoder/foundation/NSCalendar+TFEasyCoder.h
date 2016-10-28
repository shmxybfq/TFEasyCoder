//
//  NSCalendar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCalendar,NSCalendar *);

@interface NSCalendar (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCalendar, NSCalendar *);
TF_EC_MINSTANCE_INT(NSCalendar,NSCalendar *);


TF_EC_CHAIN_PROP_INT(NSCalendar ,NSLocale *,locale);
TF_EC_CHAIN_PROP_INT(NSCalendar ,NSTimeZone *,timeZone);
TF_EC_CHAIN_PROP_INT(NSCalendar ,unsigned long long,firstWeekday);
TF_EC_CHAIN_PROP_INT(NSCalendar ,unsigned long long,minimumDaysInFirstWeek);

@end