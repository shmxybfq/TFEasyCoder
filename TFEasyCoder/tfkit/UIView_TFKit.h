//
//  UIView_TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/9.
//  Copyright © 2016年 ztf. All rights reserved.
//

#ifndef UIView_TFKit_h
#define UIView_TFKit_h
#import "TFEasyCoderConst.h"

#pragma mark 不同方式便捷生成CGRect --
/**
 *  通过中心点 和 尺寸 计算 rect
 *  @param CGPoint center 值
 *  @param CGSize  size 值
 *  @return
 */
static inline CGRect CGRectWithCenterSize(CGPoint center,CGSize size){
    CGFloat w = size.width;
    CGFloat h = size.height;
    CGFloat x = (center.x - size.width * 0.5);
    CGFloat y = (center.y - size.height * 0.5);
    return CGRectMake(x, y, w, h);
}

/**
 *  通过 superView 和 UIEdgeInsets 计算 rect
 *  @return
 */
static inline CGRect CGRectWithUIEdgeInsetsSuperView(UIEdgeInsets insets,UIView *superView){
    if (superView == nil) {return CGRectZero;}
    CGFloat w = superView.frame.size.width - insets.left - insets.right;
    CGFloat h = superView.frame.size.height - insets.top - insets.bottom;
    CGFloat x = insets.left;
    CGFloat y = insets.top;
    return CGRectMake(x, y, w, h);
}

#pragma mark 屏幕适配 --
/**
 *  计算尺寸比例（新） SIZE的屏幕尺寸为750*1334
 *  @param SIZE 6s切图的尺寸
 *  @return 重新计算的尺寸
 */
static inline CGFloat Size6SNEW(CGFloat SIZE) {
    NSInteger width = [UIScreen mainScreen].bounds.size.width;
    if (width == 320) { return (SIZE) * 0.5 * (320.0/375);}
    if (width == 414) { return (SIZE) * 0.5 / (375.0/414);}
    return SIZE * 0.5;
}
/**
 *  计算字体比例（新） SIZE的屏幕尺寸为750*1334
 *  @param SIZE 6s切图的尺寸
 *  @return 重新计算的尺寸
 */
static inline CGFloat Size6SFont(CGFloat SIZE) {
    NSInteger width = [UIScreen mainScreen].bounds.size.width;
    if (width == 320) { return (SIZE) * (320.0/375);}
    if (width == 414) { return (SIZE) / (375.0/414);}
    return SIZE;
}


#endif /* UIView_TFKit_h */
