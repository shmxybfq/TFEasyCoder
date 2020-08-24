//
//  NSDate+TFTool.m
//  TFEasyCoderDemo
//
//  Created by mx on 2020/8/24.
//  Copyright © 2020 融数. All rights reserved.
//

#import "NSDate+TFTool.h"

@implementation NSDate (TFTool)

+(NSString *)tf_code_pre(currentYYYY_MM_dd){
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"YYYY-MM-dd"];
    NSDate *datenow = [NSDate date];
    NSString *currentTimeString = [formatter stringFromDate:datenow];
    return currentTimeString;
}


+(NSString *)tf_code_pre(YYYYMMddHHmmss):(NSTimeInterval)interval{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"YYYYMMddHHmmss"];
    NSDate *datenow = [NSDate dateWithTimeIntervalSinceNow:interval];
    NSString *currentTimeString = [formatter stringFromDate:datenow];
    return currentTimeString;
}




+(NSString *)tf_code_pre(getTimeFromNow):(NSInteger)year
month:(NSUInteger)month
day:(NSUInteger)day{
    NSDate *date = [NSDate tf_code_pre(getTimeFromDate):[NSDate date]
                    year:year
                    month:month
                    day:day
                    hour:0
                    minute:0
                    second:0];
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"YYYYMMddHHmmss"];
    NSString *time = [formatter stringFromDate:date];
    return time;
}


/*
 * 计算距离目标时间对应时间差的另外一个时间
 * 参数为整数或者负数
 */
+(NSDate *)tf_code_pre(getTimeFromDate):(NSDate *)date
year:(NSInteger)year
month:(NSInteger)month
day:(NSInteger)day
hour:(NSInteger)hour
minute:(NSInteger)minute
second:(NSInteger)second{
    
    //    NSCalendar *calendar = [NSCalendar currentCalendar];
    //    NSDate *currentDate = [NSDate date];
    //    NSInteger week = [calendar ordinalityOfUnit:NSCalendarUnitWeekday inUnit:NSCalendarUnitYear forDate:currentDate];
    
    
    NSCalendar *calendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSDateComponents *comp = [[NSDateComponents alloc] init];
    [comp setTimeZone:[NSTimeZone timeZoneWithAbbreviation:@"GMT+8000"]];
    [comp setYear:year];
    [comp setMonth:month];
    [comp setDay:day];
    [comp setHour:hour];
    [comp setMinute:minute];
    [comp setSecond:second];
    NSDate *calculateDate = [calendar dateByAddingComponents:comp toDate:date options:0];
    return calculateDate;
}


+(NSDate *)tf_code_pre(getCurrentTimeBeforeWeekStartDate){
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDate *now = [NSDate date];
    NSDateComponents *components = [calendar components:NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay fromDate:now];
    NSDate *currentDate = [calendar dateFromComponents:components];
    NSDate *startDate = [calendar dateByAddingUnit:NSCalendarUnitDay value:-6 toDate:currentDate options:0];
    return startDate;
}
+(NSDate *)tf_code_pre(getCurrentTimeBeforeWeekEndDate){
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDate *now = [NSDate date];
    NSDateComponents *components = [calendar components:NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay fromDate:now];
    NSDate *currentDate = [calendar dateFromComponents:components];
    NSDate *endDate = [calendar dateByAddingUnit:NSCalendarUnitDay value:1 toDate:currentDate options:0];
    return endDate;
}
@end
