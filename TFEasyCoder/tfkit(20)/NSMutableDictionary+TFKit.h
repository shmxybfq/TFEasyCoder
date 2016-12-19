//
//  NSMutableDictionary+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

@interface NSMutableDictionary (TFKit)

/**
 *  字典安全插入数据
 *
 *  @param anObject 要插入的数据
 *  @param aKey     数据key值
 */
-(void)TF_CODE_PRE(setObjectSafe):(id)anObject forKey:(id<NSCopying>)aKey;
/**
 *  字典安全插入字典
 *
 *  @param otherDictionary 要插入的字典
 */
-(void)TF_CODE_PRE(addEntriesFromDictionarySafe):(NSDictionary *)otherDictionary;



@end
