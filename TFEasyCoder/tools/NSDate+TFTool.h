//
//  NSDate+TFTool.h
//  TFEasyCoderDemo
//
//  Created by mx on 2020/8/24.
//  Copyright © 2020 融数. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"


@interface NSDate (TFTool)

+(NSString *)tf_code_pre(currentYYYY_MM_dd);

//以当前时间为基准计算时间戳差值为interval的时间
//返回格式如方法名
+(NSString *)tf_code_pre(YYYYMMddHHmmss):(NSTimeInterval)interval;

//计算距离当前时间的某一个时间
+(NSString *)tf_code_pre(getTimeFromNow):(NSInteger)year
                      month:(NSUInteger)month
                        day:(NSUInteger)day;

+(NSDate *)tf_code_pre(getTimeFromDate):(NSDate *)date
                      year:(NSInteger)year
                     month:(NSInteger)month
                       day:(NSInteger)day
                      hour:(NSInteger)hour
                    minute:(NSInteger)minute
                    second:(NSInteger)second;


//计算 当前时间的前一周的凌晨开始时间、凌晨结束时间
+(NSDate *)tf_code_pre(getCurrentTimeBeforeWeekStartDate);

+(NSDate *)tf_code_pre(getCurrentTimeBeforeWeekEndDate);

@end

