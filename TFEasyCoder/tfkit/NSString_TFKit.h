//
//  NSString_TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#ifndef NSString_TFKit_h
#define NSString_TFKit_h

#import "TFEasyCoderConst.h"




/**
 *  判断是否是符串对象
 *
 *  @param thing 要判断的字符串
 *
 *  @return 是否是字符串对象
 */

static inline BOOL tf_code_pre(stringObj)(NSString *string){
    return string == nil || [string isEqual:[NSNull null]]
    || ([string respondsToSelector:@selector(length)]
        && [(NSData *)string length] == 0)
    || ([string respondsToSelector:@selector(count)]
        && [(NSArray *)string count] == 0);
}


/**
 *  判断空字符串
 *
 *  @param thing 要判断的字符串
 *
 *  @return 是否为空
 */

static inline BOOL tf_code_pre(stringEmpty)(NSString *string){
    return (tf_code_pre(stringObj) || [string isEqual:@""] || [string isEqual:@"(null)"]);
}

/**
 *  base64加密
 *
 *  @param thing 要加密的字符串
 *
 *  @return 加密后的字符串
 */

static inline NSString * tf_code_pre(base64Encoded)(NSString *string){
    if(tf_code_pre(stringEmpty)(string)) return @"";
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    NSString *base64 = [data base64EncodedStringWithOptions:0];
    return base64;
}

/**
 *  base64解密
 *
 *  @param thing 要解密的字符串
 *
 *  @return 加密后的字符串
 */

static inline NSString * tf_code_pre(base64Dncoded)(NSString *string){
    if(tf_code_pre(stringEmpty)(string)) return @"";
    NSData *data = [[NSData  alloc]initWithBase64EncodedString:string options:0];
    return [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
}

#endif /* NSString_TFKit_h */
