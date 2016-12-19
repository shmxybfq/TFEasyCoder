//
//  NSArray+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSArray+TFKit.h"

@implementation NSArray (TFKit)

/**
 *  安全获取数组元素
 *
 *  @param index 数据下标
 *
 *  @return 数据
 */
-(id _Nonnull)TF_CODE_PRE(objectAtIndexSafe):(NSUInteger)index{
    if (index < self.count) {
        return [self objectAtIndex:index];
    }else{
        TFLog(@"数组越界错误");
        return nil;
    }
}


@end
