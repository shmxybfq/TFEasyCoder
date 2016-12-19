//
//  NSArray+TFLogChinese.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/18.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "NSArray+TFLogChinese.h"
#import <objc/runtime.h>
#import "TFEasyCoderConst.h"
@implementation NSArray (TFLogChinese)

+(void)load{
    if (TFDebug_NSArrayLogChinese) {
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            Class cls = [self class];
            SEL originalSelector = @selector(descriptionWithLocale:);
            SEL swizzledSelector = @selector(tf_descriptionWithLocale:);
            Method originalMethod = class_getInstanceMethod(cls, originalSelector);
            Method swizzledMethod = class_getInstanceMethod(cls, swizzledSelector);
            method_exchangeImplementations(originalMethod, swizzledMethod);
        });
    }
}

-(NSString *)tf_descriptionWithLocale:(id)locale{
    NSString *dataString = nil;
    @try {
        NSData *data = [NSJSONSerialization dataWithJSONObject:self
                                                       options:NSJSONWritingPrettyPrinted
                                                         error:nil];
        dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    } @catch (NSException *exception) {
        dataString = nil;
    } @finally {
        if (dataString) {
            return dataString;
        }
        return [self tf_descriptionWithLocale:locale];
    }
}
@end
