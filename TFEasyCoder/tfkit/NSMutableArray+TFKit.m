//
//  NSMutableArray+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableArray+TFKit.h"

@implementation NSMutableArray (TFKit)


-(void)TF_CODE_PRE(removeObjectAtIndexSafe):(NSUInteger)index{
    if (index < self.count) {
        [self removeObjectAtIndex:index];
    }else{
        TFLog(@"数组删除越界错误");
    }
}

-(void)TF_CODE_PRE(addObjectSafe):(id)anObject{
    if (anObject != nil) {
        [self addObject:anObject];
    }else{
        TFLog(@"数组添加越界错误");
    }
}

-(void)TF_CODE_PRE(addObjectsFromArraySafe):(NSArray *)otherArray{
    
    if (otherArray != nil && [otherArray isKindOfClass:[NSArray class]]) {
        [self addObjectsFromArray:otherArray];
    }else{
        TFLog(@"数组添加数组错误");
    }
}


@end
