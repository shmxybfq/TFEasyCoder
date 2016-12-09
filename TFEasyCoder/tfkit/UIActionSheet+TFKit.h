//
//  UIActionSheet+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/9.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void(^TFUIActionSheetBackBlock) (UIActionSheet *_Nullable actionSheet, NSInteger buttonIndex,NSString *_Nullable buttonTitle);
@interface UIActionSheet (TFKit)<UIActionSheetDelegate>

@property (nonatomic,  copy,nonnull)TFUIActionSheetBackBlock backBlock;
/**
 *  block 回调点击的方法
 *
 *  @param block
 */
-(void)tf_showInView:(UIView *_Nullable)view block:(_Nullable TFUIActionSheetBackBlock)block;

@end
