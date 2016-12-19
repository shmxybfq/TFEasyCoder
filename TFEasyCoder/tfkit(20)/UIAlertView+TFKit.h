//
//  UIAlertView+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/9.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFEasyCoderConst.h"
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

+(UIAlertView *)TF_CODE_PRE(showAutoDismissAlert):(CGFloat)dur
                                            title:(NSString *)title
                                          message:(NSString *)message;
/**
 *  block 回调点击的方法
 *
 *  @param block 
 */
-(void)TF_CODE_PRE(showWithBlock):(TFUIAlertViewBackBlock)block;

@end
