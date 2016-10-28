//
//  UIDatePicker+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDatePicker,UIDatePicker *);

@interface UIDatePicker (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDatePicker, UIDatePicker *);
TF_EC_MINSTANCE_INT(UIDatePicker,UIDatePicker *);


TF_EC_CHAIN_PROP_INT(UIDatePicker ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,double,minuteInterval)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,long long,datePickerMode)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSLocale *,locale)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSCalendar *,calendar)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSDate *,date)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSDate *,minimumDate)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,NSDate *,maximumDate)
TF_EC_CHAIN_PROP_INT(UIDatePicker ,double,countDownDuration)


@end