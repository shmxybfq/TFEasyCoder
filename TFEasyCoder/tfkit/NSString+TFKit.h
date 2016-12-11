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
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(clearString);
+(NSString *)TF_CODE_PRE(clearString):(NSString *)string;
/**
 *  获取NSObject 的纯净描述字符串,只提供静态方法访问
 *
 */
+(NSString *)TF_CODE_PRE(objString):(NSObject *)obj;


#pragma mark URL编解码 --
/**
 *  字符串的url编码和解码
 *
 *  @param string 编解码的字符串
 *
 *  @return 处理完成字符串
 */
+(NSString *)TF_CODE_PRE(URLEncodedString):(NSString *)string;
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(URLEncodedString);

+(NSString *)TF_CODE_PRE(URLDecodedString):(NSString *)string;
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(URLDecodedString);

#pragma mark 字符串尺寸 --
/**
 *  获取字符串的size:计算其他字符串
 *  @param font         字符串的字体
 *  @param contentWidth 约束的宽度
 *  @return 字符串的size
 */
+(CGSize)TF_CODE_PRE(sizeWithUIFont):(UIFont *)font
                              string:(NSString *)string
                     constraintWidth:(CGFloat)constraintWidth;
/**
 *  获取字符串的size:计算本身的字符串
 *  @param font         字符串的字体
 *  @param contentWidth 约束的宽度
 *  @return 字符串的size
 */
-(CGSize)TF_CODE_PRE(sizeWithUIFont):(UIFont *)font
                     constraintWidth:(CGFloat)constraintWidth;

#pragma mark 沙盒路径 --

+(NSString *)TF_CODE_PRE(homePath);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(homePath);

+(NSString *)TF_CODE_PRE(appPath);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(appPath);

+(NSString *)TF_CODE_PRE(documentsPath);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(documentsPath);

+(NSString *)TF_CODE_PRE(libraryPath);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(libraryPath);

+(NSString *)TF_CODE_PRE(cachePath);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(cachePath);

+(NSString *)TF_CODE_PRE(tmpPath);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(tmpPath);

+(BOOL)TF_CODE_PRE(existPath):(NSString *)path;
@property (nonatomic,assign,readonly)BOOL TF_CODE_PRE(existPathSelf);


#pragma mark 加密解密 --

+(NSString *)TF_CODE_PRE(md5):(NSString *)string;
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(md5);




@end
