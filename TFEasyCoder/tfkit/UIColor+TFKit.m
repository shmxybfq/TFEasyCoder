//
//  UIColor+TFKit.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "UIColor+TFKit.h"

@implementation UIColor (TFKit)


/**
 *  十六进制颜色
 *  @param hex 十六进制色值
 *  @return 一个颜色对象
 */
+(UIColor *)tf_colorHex:(NSInteger)hex{
    return [UIColor tf_colorHex:hex alpha:1.0];
}
+(UIColor *)tf_colorHex:(NSInteger)hex alpha:(CGFloat)alpha{
    return [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16))/255.0
                           green:((float)((hex & 0xFF00) >> 8))/255.0
                            blue:((float)(hex & 0xFF))/255.0
                           alpha:alpha];
}


/**
 *  随机颜色
 *  @return 一个颜色对象
 */
+(UIColor *)tf_randomColor{
    return [self tf_randomColorAlpha:1.0f];
}

/**
 *  随机颜色 透明度
 *  @return 一个颜色对象
 */
+(UIColor *)tf_randomColorAlpha:(CGFloat)alpha{
    return [UIColor colorWithRed:arc4random()%255/255.0f
                           green:arc4random()%255/255.0f
                            blue:arc4random()%255/255.0f
                           alpha:alpha];
}


/**
 *  获取颜色各个色值结构体
 *  @return 一个颜色对象
 */
+(ColorComponentRGBA)tf_colorComponentRGBAWithColor:(UIColor *)color{
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
+(ColorComponentRGBA)tf_colorComponentRGBAWithHexColor:(NSInteger)hex{
    return [UIColor tf_colorComponentRGBAWithColor:[UIColor tf_colorHex:hex alpha:1.0]];
}
-(ColorComponentRGBA)tf_colorComponentRGBA{
    return [UIColor tf_colorComponentRGBAWithColor:self];
}


@end
