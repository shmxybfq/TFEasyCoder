//
//  NSDateComponents+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDateComponents,NSDateComponents *);

@interface NSDateComponents (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDateComponents, NSDateComponents *);
TF_EC_MINSTANCE_INT(NSDateComponents,NSDateComponents *);


TF_EC_CHAIN_PROP_INT(NSDateComponents ,NSCalendar *,calendar);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,NSTimeZone *,timeZone);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,era);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,year);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,month);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,day);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,hour);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,minute);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,second);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,nanosecond);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,weekday);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,weekdayOrdinal);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,quarter);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,weekOfMonth);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,weekOfYear);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,long long,yearForWeekOfYear);
TF_EC_CHAIN_PROP_INT(NSDateComponents ,BOOL,leapMonth);

@end