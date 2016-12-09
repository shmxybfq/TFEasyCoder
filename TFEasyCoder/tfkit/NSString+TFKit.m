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
+(NSString *)tf_clearString:(NSString *)string{
    NSString *clearString = [string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return clearString;
}
-(NSString *)tf_clearString{
    return  [NSString tf_clearString:self];
}

/**
 *  获取NSObject 的纯净描述字符串
 *
 */
+(NSString *)tf_objString:(NSObject *)obj{
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
+(NSString *)tf_URLEncodedString:(NSString *)string{
    NSString *encodedString = (NSString *)
    CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault,
                                                              (CFStringRef)string,
                                                              NULL,
                                                              (CFStringRef)@"!*'();:@&=+$,/?%#[]",
                                                              kCFStringEncodingUTF8));
    return encodedString;
}
-(NSString *)tf_URLEncodedString{
    return [NSString tf_URLEncodedString:self];
}

+(NSString *)tf_URLDecodedString:(NSString *)string{
    NSString *decodedString=(__bridge_transfer NSString *)
    CFURLCreateStringByReplacingPercentEscapesUsingEncoding(NULL, (__bridge CFStringRef)string,CFSTR(""),CFStringConvertNSStringEncodingToEncoding(NSUTF8StringEncoding));
    return decodedString;
}
-(NSString *)tf_URLDecodedString{
    return [NSString tf_URLDecodedString:self];
}


#pragma mark 字符串尺寸 --
/**
 *  计算字符串尺寸
 *  @param font            字体
 *  @param string          要计算的字符串
 *  @param constraintWidth 宽度约束
 *  @return 字符串大小
 */
+(CGSize)tf_sizeWithUIFont:(UIFont *)font
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
-(CGSize)tf_sizeWithUIFont:(UIFont *)font
           constraintWidth:(CGFloat)constraintWidth{
    return [NSString tf_sizeWithUIFont:font string:self constraintWidth:constraintWidth];
}


#pragma mark 沙盒路径 --

+(NSString *)tf_homePath{return NSHomeDirectory();}
-(NSString *)tf_homePath{return [NSString tf_homePath];}


+(NSString *)tf_appPath{
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSApplicationDirectory, NSUserDomainMask, YES);
    return [paths objectAtIndex:0];
}
-(NSString *)tf_appPath{return [NSString tf_appPath];}


+(NSString *)tf_documentsPath{
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    return [paths objectAtIndex:0];
}
-(NSString *)tf_documentsPath{return [NSString tf_documentsPath];}


+(NSString *)tf_libraryPath{
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    return [[paths objectAtIndex:0] stringByAppendingFormat:@"/Preference"];
}
-(NSString *)tf_libraryPath{return [NSString tf_libraryPath];}


+(NSString *)tf_cachePath{
    NSArray * paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    return [[paths objectAtIndex:0] stringByAppendingFormat:@"/Caches"];
}
-(NSString *)tf_cachePath{return [NSString tf_cachePath];}


+(NSString *)tf_tmpPath{
    return [NSHomeDirectory() stringByAppendingFormat:@"/tmp"];
}
-(NSString *)tf_tmpPath{return [NSString tf_tmpPath];}


+(BOOL)tf_existPath:(NSString *)path{
    if ( NO == [[NSFileManager defaultManager]fileExistsAtPath:path]){
        return [[NSFileManager defaultManager]createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:NULL];
    }
    return NO;
}
-(BOOL)tf_existPathSelf{return [NSString tf_existPath:self];}


@end
