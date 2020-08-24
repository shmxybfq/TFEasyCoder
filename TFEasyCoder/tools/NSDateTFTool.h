//
//  NSDateTFTool.h
//  TFEasyCoderDemo
//
//  Created by mx on 2020/8/24.
//  Copyright © 2020 融数. All rights reserved.
//

#ifndef NSDateTFTool_h
#define NSDateTFTool_h
#import "TFEasyCoderConst.h"
#import "NSDate+TFTool.h"

//日期类型转换
static inline NSString *dateFormatterChange(NSString *date0,NSString *formatter0,NSString *formatter1){
    NSDateFormatter *formatter = [[NSDateFormatter alloc]init];
    [formatter setDateFormat:formatter0];
    NSDate *date = [formatter dateFromString:date0];
    [formatter setDateFormat:formatter1];
    NSString *time = [formatter stringFromDate:date];
    return time;
}

//取大值
static inline NSString *maxDate(NSString *date0,NSString *date1){
    NSComparisonResult result = [date0 compare:date1];
    if (result == NSOrderedDescending) {
        return date0;
    }
    return date1;
}

//取小值
static inline NSString *minDate(NSString *date0,NSString *date1){
    NSComparisonResult result = [date0 compare:date1];
    if (result == NSOrderedAscending) {
        return date0;
    }
    return date1;
}
//取年
static inline NSString *yearFrom(NSString *date){
    NSArray *ymd = [date componentsSeparatedByString:@"-"];
    return [ymd objectAtIndex:0];
}
//取月
static inline NSString *monthFrom(NSString *date){
    NSArray *ymd = [date componentsSeparatedByString:@"-"];
    return [ymd objectAtIndex:1];
}
//取日
static inline NSString *dayFrom(NSString *date){
    NSArray *ymd = [date componentsSeparatedByString:@"-"];
    return [ymd objectAtIndex:2];
}



static inline NSString *YYYY_MM_ddFromDate(NSDate *date){
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"YYYY-MM-dd"];
    NSString *time = [formatter stringFromDate:date];
    return time;
}


//今天YYYY-MM-dd
static inline NSString *today(){
    NSString *now = YYYY_MM_ddFromDate([NSDate date]);
    return now;
}

//今年
static inline NSString *nowYear(){
    NSString *now = today();
    NSArray *ymd = [now componentsSeparatedByString:@"-"];
    return [ymd objectAtIndex:0];
}
//今年-本月
static inline NSString *nowMonth(){
    NSString *now = today();
    NSArray *ymd = [now componentsSeparatedByString:@"-"];
    return [ymd objectAtIndex:1];
}


static inline NSDate *dateFromString(NSString *string){
    NSDateFormatter *formatter = [[NSDateFormatter alloc]init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    NSDate *date = [formatter dateFromString:string];
    NSTimeZone *zone = [NSTimeZone systemTimeZone];
    NSDate *nowDate = [NSDate date];
    NSInteger intervalAdd = [zone secondsFromGMTForDate:nowDate];
    NSDate *finalDate = [date dateByAddingTimeInterval:intervalAdd];
    return finalDate;
}



//获取某年的某个月有多少天
static inline NSInteger countForMonth(NSString *year,NSString *month){
    NSInteger count = 0;
    if (month && year) {
        NSInteger m = [month integerValue];
        NSInteger y = [year integerValue];
        if (m > 0 && y > 0) {
            if (m == 1||
                m == 3||
                m == 5||
                m == 7||
                m == 8||
                m == 10||
                m == 12) {
                count = 31;
            }else if(m == 2){
                if (y % 4 == 0) {
                    count = 29;
                }else{
                    count = 28;
                }
            }else{
                count = 30;
            }
        }
    }
    return count;
}


static inline NSString *weekStringFromInt(NSString *week){
    NSInteger wk = [week integerValue];
    switch (wk) {
        case 0:{return @"周日";}break;
        case 1:{return @"周一";}break;
        case 2:{return @"周二";}break;
        case 3:{return @"周三";}break;
        case 4:{return @"周四";}break;
        case 5:{return @"周五";}break;
        case 6:{return @"周六";}break;
        default:break;
    }
    return nil;
}

static inline NSString *weekFromDate(NSDate *date){
    if (date && [date isKindOfClass:[NSDate class]]) {
        NSCalendar *calendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
        calendar.locale = [[NSLocale alloc] initWithLocaleIdentifier:@"zh_CN"];//在真机上需要设置区域，才能正确获取本地日期，天朝代码:zh_CN
        NSDateComponents *comps = [calendar components:NSCalendarUnitWeekday fromDate:date];
        NSInteger week = [comps weekday] - 1;
        NSString *weekString = [NSString stringWithFormat:@"%@",@(week)];
        return weekString;
    }
    return nil;
}

//获取周的起始和结束
static inline NSString *weekFromAndTo(NSDate *date){
    NSInteger week = [weekFromDate(date) integerValue];
    NSInteger pre = 0;
    NSInteger suf = 0;
    switch (week) {
        case 0:{
            pre = -6;
            suf = 0;
        }break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:{
            pre = - (week - 1);
            suf = 7 - week;
        }break;
        default:break;
    }
    
    NSDate *begin = [NSDate tf_code_pre(getTimeFromDate):date year:0 month:0 day:pre hour:0 minute:0 second:0];
    NSDate *end = [NSDate tf_code_pre(getTimeFromDate):date year:0 month:0 day:suf hour:0 minute:0 second:0];
    NSString *preDate = YYYY_MM_ddFromDate(begin);
    NSString *sufDate = YYYY_MM_ddFromDate(end);
    NSString *weekFromAndTo = [NSString stringWithFormat:@"%@&&%@",preDate,sufDate];
    return weekFromAndTo;
}


//获取目标日期的周一日期
static inline NSString *weekBegin(NSString *date){
    NSString *fromAndTo = weekFromAndTo(dateFromString(date));
    NSArray *comp = [fromAndTo componentsSeparatedByString:@"&&"];
    NSString *from = comp.firstObject;
    return from;
}
//获取目标日期的周一日期
static inline NSString *weekEnd(NSString *date){
    NSString *fromAndTo = weekFromAndTo(dateFromString(date));
    NSArray *comp = [fromAndTo componentsSeparatedByString:@"&&"];
    NSString *to = comp.lastObject;
    return to;
}


//获取目标日期的上一周的周一日期
static inline NSString *preWeekBegin(NSString *date){
    NSString *begin = weekBegin(date);
    NSDate *preDate = [NSDate tf_code_pre(getTimeFromDate):dateFromString(begin) year:0 month:0 day:-1 hour:0 minute:0 second:0];
    NSString *pb = weekBegin(YYYY_MM_ddFromDate(preDate));
    return pb;
}
static inline NSString *preWeekEnd(NSString *date){
    NSString *begin = weekBegin(date);
    NSDate *preDate = [NSDate tf_code_pre(getTimeFromDate):dateFromString(begin) year:0 month:0 day:-1 hour:0 minute:0 second:0];
    NSString *pe = weekEnd(YYYY_MM_ddFromDate(preDate));
    return pe;
}

//获取目标日期的上一周的周日日期
static inline NSString *sufWeekBegin(NSString *date){
    NSString *begin = weekEnd(date);
    NSDate *sufDate = [NSDate tf_code_pre(getTimeFromDate):dateFromString(begin) year:0 month:0 day:1 hour:0 minute:0 second:0];
    NSString *sb = weekBegin(YYYY_MM_ddFromDate(sufDate));
    return sb;
}
static inline NSString *sufWeekEnd(NSString *date){
    NSString *begin = weekEnd(date);
    NSDate *sufDate = [NSDate tf_code_pre(getTimeFromDate):dateFromString(begin) year:0 month:0 day:1 hour:0 minute:0 second:0];
    NSString *se = weekEnd(YYYY_MM_ddFromDate(sufDate));
    return se;
}



#endif /* NSDateTFTool_h */
