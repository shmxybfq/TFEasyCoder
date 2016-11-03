//
//  CustemLabel.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/11/3.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "CustemLabel.h"

@implementation CustemLabel
-(instancetype)initWithParam1:(id)param1
                       Param2:(NSString *)param2
                       Param3:(UIView *)param3
                       Param4:(char)param4
                       Param5:(BOOL)param5
                       Param6:(NSInteger)param6
                       Param7:(CGPoint)param7
                       Param8:(NSTextAlignment)param8
{
    if (self = [super init]) {
        
        NSLog(@"param>>>>>>>:%@",param1);
        NSLog(@"param>>>>>>>:%@",param2);
        NSLog(@"param>>>>>>>:%@",param3);
        NSLog(@"param>>>>>>>:%c",param4);
        NSLog(@"param>>>>>>>:%d",param5);
        NSLog(@"param>>>>>>>:%ld",(long)param6);
        NSLog(@"param>>>>>>>:%@",NSStringFromCGPoint(param7));
        NSLog(@"param>>>>>>>:%ld",(long)param8);
        
    }
    return self;
}


@end
