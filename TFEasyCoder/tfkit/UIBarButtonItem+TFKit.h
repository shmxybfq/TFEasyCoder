//
//  UIBarButtonItem+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/15.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFEasyCoderConst.h"
@interface UIBarButtonItem (TFKit)

/**
 * qs coder
 */

+ (UIBarButtonItem *)tf_code_pre(itemWithImage):(NSString *)normalImage
                                higlightedImage:(NSString *)higlightedImage
                                         target:(id)target
                                         action:(SEL)action;
/**
 * qs coder
 */
+ (UIBarButtonItem *)tf_code_pre(barButtonItemTitle):(NSString *)title
                                      withTitleColor:(UIColor *)titleColor
                                            withFont:(int)fontSize
                                          withTarget:(id)target
                                        withSelector:(SEL)selector
                                       withAlignMent:(NSTextAlignment)alignment;

@end
