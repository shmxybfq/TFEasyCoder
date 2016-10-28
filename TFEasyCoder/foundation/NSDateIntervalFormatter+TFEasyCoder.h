//
//  NSDateIntervalFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDateIntervalFormatter,NSDateIntervalFormatter *);

@interface NSDateIntervalFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDateIntervalFormatter, NSDateIntervalFormatter *);
TF_EC_MINSTANCE_INT(NSDateIntervalFormatter,NSDateIntervalFormatter *);


TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSLocale *,locale);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSCalendar *,calendar);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSTimeZone *,timeZone);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSString *,dateTemplate);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,unsigned long long,dateStyle);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,unsigned long long,timeStyle);

@end