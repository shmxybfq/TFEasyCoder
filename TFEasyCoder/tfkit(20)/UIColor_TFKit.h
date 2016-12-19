//
//  UIColor_TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#ifndef UIColor_TFKit_h
#define UIColor_TFKit_h

#import "TFEasyCoderConst.h"
/**
 *  十六进制颜色,自定义透明度
 *  @param hex 16进制色值
 *  @param alpha 透明度
 *  @return UIColor
 */
static inline UIColor * TF_CODE_PRE(ColorHexAlpha)(int hex,float alpha){
    return [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16))/255.0
                           green:((float)((hex & 0xFF00) >> 8))/255.0
                            blue:((float)(hex & 0xFF))/255.0
                           alpha:alpha];
}
/**
 *  十六进制颜色,透明度默认1.0
 *  @param hex 16进制色值
 *  @param alpha 透明度
 *  @return UIColor
 */
static inline UIColor * TF_CODE_PRE(ColorHex)(int hex){
    return TF_CODE_PRE(ColorHexAlpha)(hex,1.0);
}
/**
 *  RGBA颜色,透明度默认1.0
 *  @return UIColor
 */
static inline UIColor * TF_CODE_PRE(ColorRGB)(float red,float green,float blue){
    return  [UIColor colorWithRed:red green:green blue:blue alpha:1.0];
}
/**
 *  RGB颜色,自定义透明度
 *  @return UIColor
 */
static inline UIColor * TF_CODE_PRE(ColorRGBA)(float red,float green,float blue,float alpha){
    return  [UIColor colorWithRed:red green:green blue:blue alpha:alpha];
}
/**
 *  随机色,透明度默认1.0
 *  @return UIColor
 */
static inline UIColor * TF_CODE_PRE(ColorRandom)(){
    return  [UIColor colorWithRed:(arc4random_uniform(255)/255.0)
                            green:(arc4random_uniform(255)/255.0)
                             blue:(arc4random_uniform(255)/255.0)
                            alpha:1.0];
}
/**
 *  随机色,自定义透明度
 *  @return UIColor
 */
static inline UIColor * TF_CODE_PRE(ColorRandomAlpha)(float alpha){
    return  [UIColor colorWithRed:(arc4random_uniform(255)/255.0)
                            green:(arc4random_uniform(255)/255.0)
                             blue:(arc4random_uniform(255)/255.0)
                            alpha:alpha];
}



#endif /* UIColor_TFKit_h */
