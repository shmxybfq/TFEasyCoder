//
//  UIColor+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIColor+TFKit.h"

@implementation UIColor (TFKit)

#pragma mark 创建颜色 --
/**
 *  十六进制颜色
 *  @param hex 十六进制色值
 *  @return 一个颜色对象
 */
+(UIColor *)tf_code_pre(colorHex):(NSInteger)hex{
    return [UIColor tf_code_pre(colorHex):hex alpha:1.0];
}
+(UIColor *)tf_code_pre(colorHex):(NSInteger)hex alpha:(CGFloat)alpha{
    return [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16))/255.0
                           green:((float)((hex & 0xFF00) >> 8))/255.0
                            blue:((float)(hex & 0xFF))/255.0
                           alpha:alpha];
}


/**
 *  随机颜色
 *  @return 一个颜色对象
 */
+(UIColor *)tf_code_pre(randomColor){
    return [self tf_code_pre(randomColorAlpha):1.0f];
}

/**
 *  随机颜色 透明度
 *  @return 一个颜色对象
 */
+(UIColor *)tf_code_pre(randomColorAlpha):(CGFloat)alpha{
    return [UIColor colorWithRed:arc4random()%255/255.0f
                           green:arc4random()%255/255.0f
                            blue:arc4random()%255/255.0f
                           alpha:alpha];
}

#pragma mark 获取颜色的RGB结构体 --
/**
 *  获取颜色各个色值结构体
 *  @return 一个颜色对象
 */
+(ColorComponentRGBA)tf_code_pre(colorComponentRGBAWithColor):(UIColor *)color{
    ColorComponentRGBA rgba;
    CGColorRef cgcolor = [color CGColor];
    size_t numComponents = CGColorGetNumberOfComponents(color.CGColor);
    if (numComponents == 4){
        const CGFloat *components = CGColorGetComponents(cgcolor);
        rgba.red = components[0];
        rgba.green = components[1];
        rgba.blue = components[2];
        rgba.alpha = components[3];
    }
    return rgba;
}
+(ColorComponentRGBA)tf_code_pre(colorComponentRGBAWithHexColor):(NSInteger)hex{
    return [UIColor tf_code_pre(colorComponentRGBAWithColor):[UIColor tf_code_pre(colorHex):hex alpha:1.0]];
}
-(ColorComponentRGBA)tf_code_pre(colorComponentRGBA){
    return [UIColor tf_code_pre(colorComponentRGBAWithColor):self];
}


@end
