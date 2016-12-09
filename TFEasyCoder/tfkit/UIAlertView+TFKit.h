//
//  UIAlertView+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/9.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^TFUIAlertViewBackBlock) (UIAlertView *alertView, NSInteger buttonIndex,NSString *bottonTitle);

@interface UIAlertView (TFKit)<UIAlertViewDelegate>

@property (nonatomic,  copy)TFUIAlertViewBackBlock backBlock;
/**
 *  弹出一个自动消失的UIAlertView
 *
 *  @param dur     显示时间
 *  @param title   title
 *  @param message msg
 *
 *  @return UIAlertView
 */

+(UIAlertView *)tf_showAutoDismissAlert:(CGFloat)dur
                                  title:(NSString *)title
                                message:(NSString *)message;
/**
 *  block 回调点击的方法
 *
 *  @param block 
 */
-(void)tf_showWithBlock:(TFUIAlertViewBackBlock)block;

@end
