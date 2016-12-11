//
//  UIActionSheet+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/9.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFEasyCoderConst.h"

typedef void(^TFUIActionSheetBackBlock) (UIActionSheet *_Nullable actionSheet,
                                         NSInteger buttonIndex,
                                         NSString *_Nullable buttonTitle);

@interface UIActionSheet (TFKit)<UIActionSheetDelegate>

@property (nonatomic,  copy,nonnull)TFUIActionSheetBackBlock backBlock;
/**
 *  block 回调点击的方法
 *
 *  @param block
 */

-(void)TF_CODE_PRE(showInView):(UIView *_Nullable)view block:(_Nullable TFUIActionSheetBackBlock)block;

/**
 *  快速弹出 UIActionSheet
 *  @param title
 *  @param inView
 *  @param cancle
 *  @param des
 *  @param othter
 *  @param block
 *  @return
 */
+(UIActionSheet *_Nullable)TF_CODE_PRE(showWithTitle):(NSString *_Nullable)title
                                               inView:(UIView   *_Nullable)inView
                                    cancelButtonTitle:(NSString *_Nullable)cancle
                               destructiveButtonTitle:(NSString *_Nullable)des
                                    otherButtonTitles:(NSArray  *_Nullable)othter
                                                block:(_Nullable TFUIActionSheetBackBlock)block;
@end
