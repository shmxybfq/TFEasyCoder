//
//  UIColor+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>

struct ColorComponentRGBA {
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat alpha;
};
typedef struct ColorComponentRGBA ColorComponentRGBA;


@interface UIColor (TFKit)


/**
 *  十六进制颜色
 *  @param hex 十六进制色值
 *  @return 一个颜色对象
 */
+(UIColor *)tf_colorHex:(NSInteger)hex;
+(UIColor *)tf_colorHex:(NSInteger)hex alpha:(CGFloat)alpha;

/**
 *  随机颜色
 *  @return 一个颜色对象
 */
+(UIColor *)tf_randomColor;

/**
 *  随机颜色 透明度
 *  @return 一个颜色对象
 */
+(UIColor *)tf_randomColorAlpha:(CGFloat)alpha;

/**
 *  获取颜色各个色值结构体
 *  @return 一个颜色对象
 */
+(ColorComponentRGBA)tf_colorComponentRGBAWithColor:(UIColor *)color;
+(ColorComponentRGBA)tf_colorComponentRGBAWithHexColor:(NSInteger)hex;
-(ColorComponentRGBA)tf_colorComponentRGBA;


@end
