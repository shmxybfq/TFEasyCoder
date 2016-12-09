//
//  UIImage+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/9.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (TFKit)


/**
 *  获取图片
 *  @param name 图片名
 *  @return 图片对象
 */
+(UIImage *)tf_imageNamed:(NSString *)name;
/**
 *  从中间拉伸图片
 *  @param image 要拉伸的图片
 *  @return 拉伸后的图片
 */
+(UIImage *)tf_resizeImageHalf:(UIImage *)image;
/**
 *  获取图片并拉伸拉伸图片
 *  @param name      图片名字
 *  @param leftScale 左边拉伸比例 0.0=> && <= 1.0
 *  @param topScale  上边拉伸比例 0.0=> && <= 1.0
 *  @return
 */
+(UIImage *)tf_resizeImage:(UIImage *)image leftScale:(CGFloat)leftScale topScale:(CGFloat)topScale;

/**
 *  color 生成 image
 *  @param color 颜色
 *  @return 图片
 */
+(UIImage *)tf_imageWithColor:(UIColor *)color;

/**
 *  缩放image,只可以缩小不可以放大
 *  @param size  要缩放后的尺寸
 */
- (UIImage*)tf_scaleImageSize:(CGSize)size;


@end
