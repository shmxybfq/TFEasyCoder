//
//  NSString+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface NSString (TFKit)

#pragma mark 字符串处理 --
/**
 *  字符串去除空格和换行符,提供静态方法访问和属性访问
 */
@property (nonatomic,  copy,readonly)NSString *tf_clearString;
+(NSString *)tf_clearString:(NSString *)string;
/**
 *  获取NSObject 的纯净描述字符串,只提供静态方法访问
 *
 */
+(NSString *)tf_objString:(NSObject *)obj;


#pragma mark URL编解码 --
/**
 *  字符串的url编码和解码
 *
 *  @param string 编解码的字符串
 *
 *  @return 处理完成字符串
 */
+(NSString *)tf_URLEncodedString:(NSString *)string;
@property (nonatomic,  copy,readonly)NSString *tf_URLEncodedString;
+(NSString *)tf_URLDecodedString:(NSString *)string;
@property (nonatomic,  copy,readonly)NSString *tf_URLDecodedString;

#pragma mark 字符串尺寸 --
/**
 *  获取字符串的size:计算其他字符串
 *  @param font         字符串的字体
 *  @param contentWidth 约束的宽度
 *  @return 字符串的size
 */
+(CGSize)tf_sizeWithUIFont:(UIFont *)font
                    string:(NSString *)string
           constraintWidth:(CGFloat)constraintWidth;
/**
 *  获取字符串的size:计算本身的字符串
 *  @param font         字符串的字体
 *  @param contentWidth 约束的宽度
 *  @return 字符串的size
 */
-(CGSize)tf_sizeWithUIFont:(UIFont *)font
           constraintWidth:(CGFloat)constraintWidth;

#pragma mark 沙盒路径 --

+(NSString *)tf_homePath;
@property (nonatomic,  copy,readonly)NSString *tf_homePath;

+(NSString *)tf_appPath;
@property (nonatomic,  copy,readonly)NSString *tf_appPath;

+(NSString *)tf_documentsPath;
@property (nonatomic,  copy,readonly)NSString *tf_documentsPath;

+(NSString *)tf_libraryPath;
@property (nonatomic,  copy,readonly)NSString *tf_libraryPath;

+(NSString *)tf_cachePath;
@property (nonatomic,  copy,readonly)NSString *tf_cachePath;

+(NSString *)tf_tmpPath;
@property (nonatomic,  copy,readonly)NSString *tf_tmpPath;

+(BOOL)tf_existPath:(NSString *)path;
@property (nonatomic,assign,readonly)BOOL tf_existPathSelf;

@end
