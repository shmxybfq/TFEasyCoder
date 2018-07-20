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
+(UIImage *)tf_code_pre(imageNamed):(NSString *)name{
    return [self imageNamed:name];
}

/**
 *  从中间拉伸图片
 *  @param image 要拉伸的图片
 *  @return 拉伸后的图片
 */
+(UIImage *)tf_code_pre(resizeImageHalf):(UIImage *)image{
    return [self tf_code_pre(resizeImage):image leftScale:0.5 topScale:0.5];
}
/**
 *  获取图片并拉伸拉伸图片
 *  @param name      图片名字
 *  @param leftScale 左边拉伸比例 0.0=> && <= 1.0
 *  @param topScale  上边拉伸比例 0.0=> && <= 1.0
 *  @return
 */
+(UIImage *)tf_code_pre(resizeImage):(UIImage *)image leftScale:(CGFloat)leftScale topScale:(CGFloat)topScale{
    return [image stretchableImageWithLeftCapWidth:(image.size.width * leftScale)
                                      topCapHeight:(image.size.height * topScale)];
}

/**
 *  color 生成 image
 *  @param color 颜色
 *  @return 图片
 */
+(UIImage *)tf_code_pre(imageWithColor):(UIColor *)color{
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
 * view 生成 image
 *
 * @param view view
  *@return image
 */
+ (UIImage *)tf_code_pre(imageWithView):(UIView *)view {
    CGSize s = view.bounds.size;
    // 下面方法，第一个参数表示区域大小。第二个参数表示是否是非透明的。如果需要显示半透明效果，需要传NO，否则传YES。第三个参数就是屏幕密度了，关键就是第三个参数。
    UIGraphicsBeginImageContextWithOptions(s, NO, [UIScreen mainScreen].scale);
    
    [view.layer renderInContext:UIGraphicsGetCurrentContext()];
    
    UIImage*image = UIGraphicsGetImageFromCurrentImageContext();
    
    UIGraphicsEndImageContext();
    
    return [UIImage imageWithData:UIImagePNGRepresentation(image)];
}

/**
 *  缩放image,只可以缩小不可以放大
 *  @param size  要缩放后的尺寸
 */
- (UIImage*)tf_code_pre(scaleImageSize):(CGSize)size{
    UIGraphicsBeginImageContext(size);//创建一个bitmap的context,并把它设置成为当前正在使用的context
    [self drawInRect:CGRectMake(0, 0, size.width, size.height)];//绘制改变大小的图片
    UIImage* scaledImage = UIGraphicsGetImageFromCurrentImageContext();//从当前context中创建一个改变大小后的图片
    UIGraphicsEndImageContext();//使当前的context出堆栈
    return scaledImage;//返回新的改变大小后的图片
}

@end
