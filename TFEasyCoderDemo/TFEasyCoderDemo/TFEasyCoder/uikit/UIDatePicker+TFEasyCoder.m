//
//  UIDatePicker+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDatePicker+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDatePicker (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDatePicker, UIDatePicker *);
TF_EC_MINSTANCE_IMP(UIDatePicker, UIDatePicker *);



TF_EC_CHAIN_PROP_IMP(UIDatePicker ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,double,minuteInterval)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,long long,datePickerMode)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSLocale *,locale)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSCalendar *,calendar)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSDate *,date)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSDate *,minimumDate)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,NSDate *,maximumDate)
TF_EC_CHAIN_PROP_IMP(UIDatePicker ,double,countDownDuration)

@end