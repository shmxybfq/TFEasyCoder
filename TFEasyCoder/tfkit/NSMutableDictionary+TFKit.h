//
//  NSMutableDictionary+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (TFKit)

/**
 *  字典安全插入数据
 *
 *  @param anObject 要插入的数据
 *  @param aKey     数据key值
 */
-(void)setObject_tfSafe:(id)anObject forKey:(id<NSCopying>)aKey;
/**
 *  字典安全插入字典
 *
 *  @param otherDictionary 要插入的字典
 */
-(void)addEntriesFromDictionary_tfSafe:(NSDictionary *)otherDictionary;



@end
