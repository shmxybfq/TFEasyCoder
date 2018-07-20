//
//  UIColor+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFEasyCoderConst.h"

struct ColorComponentRGBA {
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat alpha;
};
typedef struct ColorComponentRGBA ColorComponentRGBA;


@interface UIColor (TFKit)

#pragma mark 创建颜色 --
/**
 *  十六进制颜色
 *  @param hex 十六进制色值
 *  @return 一个颜色对象
 */

+(UIColor *)tf_code_pre(colorHex):(NSInteger)hex;
+(UIColor *)tf_code_pre(colorHex):(NSInteger)hex alpha:(CGFloat)alpha;

/**
 *  随机颜色
 *  @return 一个颜色对象
 */
+(UIColor *)tf_code_pre(randomColor);

/**
 *  随机颜色 透明度
 *  @return 一个颜色对象
 */
+(UIColor *)tf_code_pre(randomColorAlpha):(CGFloat)alpha;

#pragma mark 获取颜色的RGB结构体 --
/**
 *  获取颜色各个色值结构体
 *  @return 一个颜色对象
 */
+(ColorComponentRGBA)tf_code_pre(colorComponentRGBAWithColor):(UIColor *)color;
+(ColorComponentRGBA)tf_code_pre(colorComponentRGBAWithHexColor):(NSInteger)hex;
-(ColorComponentRGBA)tf_code_pre(colorComponentRGBA);


@end
