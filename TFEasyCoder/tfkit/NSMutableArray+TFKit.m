//
//  NSMutableArray+TFKit.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "NSMutableArray+TFKit.h"
#import "TFEasyCoderConst.h"
@implementation NSMutableArray (TFKit)


-(void)removeObjectAtIndex_tfSafe:(NSUInteger)index{
    if (index < self.count) {
        [self removeObjectAtIndex:index];
    }else{
        TFLog(@"数组删除越界错误");
    }
}

-(void)addObject_tfSafe:(id)anObject{
    if (anObject != nil) {
        [self addObject:anObject];
    }else{
        TFLog(@"数组添加越界错误");
    }
}

-(void)addObjectsFromArray_tfSafe:(NSArray *)otherArray{
    
    if (otherArray != nil && [otherArray isKindOfClass:[NSArray class]]) {
        [self addObjectsFromArray:otherArray];
    }else{
        TFLog(@"数组添加数组错误");
    }
}


@end
