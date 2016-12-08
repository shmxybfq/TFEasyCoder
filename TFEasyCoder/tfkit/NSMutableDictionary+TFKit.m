//
//  NSMutableDictionary+TFKit.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "NSMutableDictionary+TFKit.h"
#import "TFEasyCoderConst.h"

@implementation NSMutableDictionary (TFKit)
-(void)setObject_tfSafe:(id)anObject forKey:(id<NSCopying>)aKey{
    
    if (anObject != nil) {
        [self setObject:anObject forKey:aKey];
    }else{
        TFLog(@"插入元素错误");
    }
}

-(void)addEntriesFromDictionary_tfSafe:(NSDictionary *)otherDictionary{
    if (otherDictionary != nil && [otherDictionary isKindOfClass:[NSMutableDictionary class]]) {
        [self addEntriesFromDictionary:otherDictionary];
    }else{
        TFLog(@"字典插入字典错误");
    }
}

@end
