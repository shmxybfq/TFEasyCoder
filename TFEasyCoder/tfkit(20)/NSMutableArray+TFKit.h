//
//  NSMutableArray+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

@interface NSMutableArray (TFKit)

/**
 *  安全删除数组元素
 *
 *  @param index 元素下标
 */
-(void)TF_CODE_PRE(removeObjectAtIndexSafe):(NSUInteger)index;
/**
 *  安全添加元素
 *
 *  @param anObject 要添加的元素
 */
-(void)TF_CODE_PRE(addObjectSafe):(id)anObject;
/**
 *  安全添加数组
 *
 *  @param otherArray 要添加的数组
 */
-(void)TF_CODE_PRE(addObjectsFromArraySafe):(NSArray *)otherArray;

@end
