//
//  UIImage+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/9.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIImage+TFKit.h"

@implementation UIImage (TFKit)

/**
 *  获取图片
 *  @param name 图片名
 *  @return 图片对象
 */
+(UIImage *)TF_CODE_PRE(imageNamed):(NSString *)name{
    return [self imageNamed:name];
}

/**
 *  从中间拉伸图片
 *  @param image 要拉伸的图片
 *  @return 拉伸后的图片
 */
+(UIImage *)TF_CODE_PRE(resizeImageHalf):(UIImage *)image{
    return [self TF_CODE_PRE(resizeImage):image leftScale:0.5 topScale:0.5];
}
/**
 *  获取图片并拉伸拉伸图片
 *  @param name      图片名字
 *  @param leftScale 左边拉伸比例 0.0=> && <= 1.0
 *  @param topScale  上边拉伸比例 0.0=> && <= 1.0
 *  @return
 */
+(UIImage *)TF_CODE_PRE(resizeImage):(UIImage *)image leftScale:(CGFloat)leftScale topScale:(CGFloat)topScale{
    return [image stretchableImageWithLeftCapWidth:(image.size.width * leftScale)
                                      topCapHeight:(image.size.height * topScale)];
}

/**
 *  color 生成 image
 *  @param color 颜色
 *  @return 图片
 */
+(UIImage *)TF_CODE_PRE(imageWithColor):(UIColor *)color{
    CGRect rect = CGRectMake(0.0f, 0.0f, 1.0f, 1.0f);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}

/**
 *  缩放image,只可以缩小不可以放大
 *  @param size  要缩放后的尺寸
 */
- (UIImage*)TF_CODE_PRE(scaleImageSize):(CGSize)size{
    UIGraphicsBeginImageContext(size);//创建一个bitmap的context,并把它设置成为当前正在使用的context
    [self drawInRect:CGRectMake(0, 0, size.width, size.height)];//绘制改变大小的图片
    UIImage* scaledImage = UIGraphicsGetImageFromCurrentImageContext();//从当前context中创建一个改变大小后的图片
    UIGraphicsEndImageContext();//使当前的context出堆栈
    return scaledImage;//返回新的改变大小后的图片
}

@end
