//
//  NSMutableArray+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (TFKit)

/**
 *  安全删除数组元素
 *
 *  @param index 元素下标
 */
-(void)removeObjectAtIndex_tfSafe:(NSUInteger)index;
/**
 *  安全添加元素
 *
 *  @param anObject 要添加的元素
 */
-(void)addObject_tfSafe:(id)anObject;
/**
 *  安全添加数组
 *
 *  @param otherArray 要添加的数组
 */
-(void)addObjectsFromArray_tfSafe:(NSArray *)otherArray;

@end
