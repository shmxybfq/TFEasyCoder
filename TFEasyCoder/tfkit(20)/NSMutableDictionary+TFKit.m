//
//  NSMutableDictionary+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableDictionary+TFKit.h"
#import "TFEasyCoderConst.h"

@implementation NSMutableDictionary (TFKit)

-(void)TF_CODE_PRE(setObjectSafe):(id)anObject forKey:(id<NSCopying>)aKey{
    
    if (anObject != nil) {
        [self setObject:anObject forKey:aKey];
    }else{
        TFLog(@"插入元素错误");
    }
}

-(void)TF_CODE_PRE(addEntriesFromDictionarySafe):(NSDictionary *)otherDictionary{
    if (otherDictionary != nil && [otherDictionary isKindOfClass:[NSMutableDictionary class]]) {
        [self addEntriesFromDictionary:otherDictionary];
    }else{
        TFLog(@"字典插入字典错误");
    }
}

@end
