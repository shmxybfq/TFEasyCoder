//
//  NSString+TFKit.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "NSString+TFKit.h"

@implementation NSString (TFKit)


#pragma mark 字符串处理 --
/**
 *  字符串去除空格和换行符
 *
 */
+(NSString *)TF_CODE_PRE(clearString):(NSString *)string{
    NSString *clearString = [string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return clearString;
}
-(NSString *)TF_CODE_PRE(clearString){
    return  [NSString TF_CODE_PRE(clearString):self];
}

/**
 *  获取NSObject 的纯净描述字符串
 *
 */
+(NSString *)TF_CODE_PRE(objString):(NSObject *)obj{
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
+(NSString *)TF_CODE_PRE(URLEncodedString):(NSString *)string{
    NSString *encodedString = (NSString *)
    CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault,
                                                              (CFStringRef)string,
                                                              NULL,
                                                              (CFStringRef)@"!*'();:@&=+$,/?%#[]",
                                                              kCFStringEncodingUTF8));
    return encodedString;
}
-(NSString *)TF_CODE_PRE(URLEncodedString){
    return [NSString TF_CODE_PRE(URLEncodedString):self];
}

+(NSString *)TF_CODE_PRE(URLDecodedString):(NSString *)string{
    NSString *decodedString=(__bridge_transfer NSString *)
    CFURLCreateStringByReplacingPercentEscapesUsingEncoding(NULL, (__bridge CFStringRef)string,CFSTR(""),CFStringConvertNSStringEncodingToEncoding(NSUTF8StringEncoding));
    return decodedString;
}
-(NSString *)TF_CODE_PRE(URLDecodedString){
    return [NSString TF_CODE_PRE(URLDecodedString):self];
}


#pragma mark 字符串尺寸 --
/**
 *  计算字符串尺寸
 *  @param font            字体
 *  @param string          要计算的字符串
 *  @param constraintWidth 宽度约束
 *  @return 字符串大小
 */
+(CGSize)TF_CODE_PRE(sizeWithUIFont):(UIFont *)font
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
-(CGSize)TF_CODE_PRE(sizeWithUIFont):(UIFont *)font
           constraintWidth:(CGFloat)constraintWidth{
    return [NSString TF_CODE_PRE(sizeWithUIFont):font string:self constraintWidth:constraintWidth];
}


#pragma mark 沙盒路径 --

+(NSString *)TF_CODE_PRE(homePath){return NSHomeDirectory();}
-(NSString *)TF_CODE_PRE(homePath){return [NSString TF_CODE_PRE(homePath)];}


+(NSString *)TF_CODE_PRE(appPath){
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSApplicationDirectory, NSUserDomainMask, YES);
    return [paths objectAtIndex:0];
}
-(NSString *)TF_CODE_PRE(appPath){return [NSString TF_CODE_PRE(appPath)];}


+(NSString *)TF_CODE_PRE(documentsPath){
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    return [paths objectAtIndex:0];
}
-(NSString *)TF_CODE_PRE(documentsPath){return [NSString TF_CODE_PRE(documentsPath)];}


+(NSString *)TF_CODE_PRE(libraryPath){
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    return [[paths objectAtIndex:0] stringByAppendingFormat:@"/Preference"];
}
-(NSString *)TF_CODE_PRE(libraryPath){return [NSString TF_CODE_PRE(libraryPath)];}


+(NSString *)TF_CODE_PRE(cachePath){
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    return [[paths objectAtIndex:0] stringByAppendingFormat:@"/Caches"];
}
-(NSString *)TF_CODE_PRE(cachePath){return [NSString TF_CODE_PRE(cachePath)];}


+(NSString *)TF_CODE_PRE(tmpPath){
    return [NSHomeDirectory() stringByAppendingFormat:@"/tmp"];
}
-(NSString *)TF_CODE_PRE(tmpPath){return [NSString TF_CODE_PRE(tmpPath)];}


+(BOOL)TF_CODE_PRE(existPath):(NSString *)path{
    if ( NO == [[NSFileManager defaultManager]fileExistsAtPath:path]){
        return [[NSFileManager defaultManager]createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:NULL];
    }
    return NO;
}
-(BOOL)TF_CODE_PRE(existPathSelf){return [NSString TF_CODE_PRE(existPath):self];}


@end
