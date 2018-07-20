//
//  NSString+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

@interface NSString (TFKit)



#pragma mark 字符串处理 --
/**
 *  字符串去除空格和换行符,提供静态方法访问和属性访问
 */
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(clearString);
+(NSString *)tf_code_pre(clearString):(NSString *)string;
/**
 *  获取NSObject 的纯净描述字符串,只提供静态方法访问
 *
 */
+(NSString *)tf_code_pre(objString):(NSObject *)obj;


#pragma mark URL编解码 --
/**
 *  字符串的url编码和解码
 *
 *  @param string 编解码的字符串
 *
 *  @return 处理完成字符串
 */
+(NSString *)tf_code_pre(URLEncodedString):(NSString *)string;
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(URLEncodedString);

+(NSString *)tf_code_pre(URLDecodedString):(NSString *)string;
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(URLDecodedString);

#pragma mark 字符串尺寸 --
/**
 *  获取字符串的size:计算其他字符串
 *  @param font         字符串的字体
 *  @param contentWidth 约束的宽度
 *  @return 字符串的size
 */
+(CGSize)tf_code_pre(sizeWithUIFont):(UIFont *)font
                              string:(NSString *)string
                     constraintWidth:(CGFloat)constraintWidth;
/**
 *  获取字符串的size:计算本身的字符串
 *  @param font         字符串的字体
 *  @param contentWidth 约束的宽度
 *  @return 字符串的size
 */
-(CGSize)tf_code_pre(sizeWithUIFont):(UIFont *)font
                     constraintWidth:(CGFloat)constraintWidth;

#pragma mark 沙盒路径 --

+(NSString *)tf_code_pre(homePath);
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(homePath);

+(NSString *)tf_code_pre(appPath);
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(appPath);

+(NSString *)tf_code_pre(documentsPath);
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(documentsPath);

+(NSString *)tf_code_pre(libraryPath);
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(libraryPath);

+(NSString *)tf_code_pre(cachePath);
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(cachePath);

+(NSString *)tf_code_pre(tmpPath);
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(tmpPath);

+(BOOL)tf_code_pre(existPath):(NSString *)path;
@property (nonatomic,assign,readonly)BOOL tf_code_pre(existPathSelf);


#pragma mark 加密解密 --

+(NSString *)tf_code_pre(md5):(NSString *)string;
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(md5);

#pragma mark 判断字符串是否为空 --
/**
 *  判断输入框输入是否为空
 *
 *  @param str 输入框文字
 *
 *  @return 空 YES 有值 NO
 */
-(BOOL)tf_code_pre(isInputEmpty);

@end
