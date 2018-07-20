//
//  NSString+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSString+TFKit.h"
#import <CommonCrypto/CommonDigest.h>

@implementation NSString (TFKit)


#pragma mark 字符串处理 --
/**
 *  字符串去除空格和换行符
 *
 */
+(NSString *)tf_code_pre(clearString):(NSString *)string{
    NSString *clearString = [string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return clearString;
}
-(NSString *)tf_code_pre(clearString){
    return  [NSString tf_code_pre(clearString):self];
}

/**
 *  获取NSObject 的纯净描述字符串
 *
 */
+(NSString *)tf_code_pre(objString):(NSObject *)obj{
    NSString *string = [NSString stringWithFormat:@"%@",obj.description];
    string = [string stringByReplacingOccurrencesOfString:@"(null)" withString:@""];
    return string;
}

#pragma mark URL编解码 --
/**
 *  字符串的url编码和解码
 *
 *  @param string 编解码的字符串
 *
 *  @return 处理完成字符串
 */
+(NSString *)tf_code_pre(URLEncodedString):(NSString *)string{
    NSString *encodedString = (NSString *)
    CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault,
                                                              (CFStringRef)string,
                                                              NULL,
                                                              (CFStringRef)@"!*'();:@&=+$,/?%#[]",
                                                              kCFStringEncodingUTF8));
    return encodedString;
}
-(NSString *)tf_code_pre(URLEncodedString){
    return [NSString tf_code_pre(URLEncodedString):self];
}

+(NSString *)tf_code_pre(URLDecodedString):(NSString *)string{
    NSString *decodedString=(__bridge_transfer NSString *)
    CFURLCreateStringByReplacingPercentEscapesUsingEncoding(NULL, (__bridge CFStringRef)string,CFSTR(""),CFStringConvertNSStringEncodingToEncoding(NSUTF8StringEncoding));
    return decodedString;
}
-(NSString *)tf_code_pre(URLDecodedString){
    return [NSString tf_code_pre(URLDecodedString):self];
}


#pragma mark 字符串尺寸 --
/**
 *  计算字符串尺寸
 *  @param font            字体
 *  @param string          要计算的字符串
 *  @param constraintWidth 宽度约束
 *  @return 字符串大小
 */
+(CGSize)tf_code_pre(sizeWithUIFont):(UIFont *)font
                              string:(NSString *)string
                     constraintWidth:(CGFloat)constraintWidth{
                         
    CGSize boundingSize = CGSizeMake(constraintWidth ,MAXFLOAT);
    NSDictionary *attribute = @{NSFontAttributeName:font};
    NSStringDrawingOptions options = NSStringDrawingTruncatesLastVisibleLine |
    NSStringDrawingUsesLineFragmentOrigin |
    NSStringDrawingUsesFontLeading;
    CGSize contentSize = [string boundingRectWithSize:boundingSize
                                              options:options
                                           attributes:attribute
                                              context:nil].size;
    return contentSize;
}
-(CGSize)tf_code_pre(sizeWithUIFont):(UIFont *)font
           constraintWidth:(CGFloat)constraintWidth{
    return [NSString tf_code_pre(sizeWithUIFont):font string:self constraintWidth:constraintWidth];
}


#pragma mark 沙盒路径 --

+(NSString *)tf_code_pre(homePath){return NSHomeDirectory();}
-(NSString *)tf_code_pre(homePath){return [NSString tf_code_pre(homePath)];}


+(NSString *)tf_code_pre(appPath){
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSApplicationDirectory, NSUserDomainMask, YES);
    return paths.firstObject;
}
-(NSString *)tf_code_pre(appPath){return [NSString tf_code_pre(appPath)];}


+(NSString *)tf_code_pre(documentsPath){
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    return paths.firstObject;
}
-(NSString *)tf_code_pre(documentsPath){return [NSString tf_code_pre(documentsPath)];}


+(NSString *)tf_code_pre(libraryPath){
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    return [paths.firstObject stringByAppendingFormat:@"/Preference"];
}
-(NSString *)tf_code_pre(libraryPath){return [NSString tf_code_pre(libraryPath)];}


+(NSString *)tf_code_pre(cachePath){
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    return [paths.firstObject stringByAppendingFormat:@"/Caches"];
}
-(NSString *)tf_code_pre(cachePath){return [NSString tf_code_pre(cachePath)];}


+(NSString *)tf_code_pre(tmpPath){
    return [NSHomeDirectory() stringByAppendingFormat:@"/tmp"];
}
-(NSString *)tf_code_pre(tmpPath){return [NSString tf_code_pre(tmpPath)];}


+(BOOL)tf_code_pre(existPath):(NSString *)path{
    if ( NO == [[NSFileManager defaultManager]fileExistsAtPath:path]){
        return [[NSFileManager defaultManager]createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:NULL];
    }
    return NO;
}
-(BOOL)tf_code_pre(existPathSelf){return [NSString tf_code_pre(existPath):self];}

#pragma mark 加密解密 --
-(NSString *)tf_code_pre(md5){
    return [NSString tf_code_pre(md5):self];
}
+(NSString *)tf_code_pre(md5):(NSString *)string{
    const char *cStr = [string UTF8String];
    unsigned char result[16];
    CC_MD5(cStr, (CC_LONG)strlen(cStr), result); // This is the md5 call
    return [NSString stringWithFormat:
            @"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
            result[0], result[1], result[2], result[3],
            result[4], result[5], result[6], result[7],
            result[8], result[9], result[10], result[11],
            result[12], result[13], result[14], result[15]
            ];
}

#pragma mark 判断字符串是否为空 --
/**
 *  判断输入框输入是否为空
 *
 *  @param str 输入框文字
 *
 *  @return 空 YES 有值 NO
 */
-(BOOL)tf_code_pre(isInputEmpty)
{
    if([self isEqualToString:@""]){
        return YES;
    }else if (!self) {
        return YES;
    }else {
        NSCharacterSet *set = [NSCharacterSet whitespaceAndNewlineCharacterSet];
        NSString *trimedString = [self stringByTrimmingCharactersInSet:set];
        if ([trimedString length] == 0) {
            return YES;
        } else {
            return NO;
        }
    }
}

@end
