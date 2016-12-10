//
//  UIActionSheet+TFKit.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/9.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "UIActionSheet+TFKit.h"
#import "NSObject+TFExecute.h"

@implementation UIActionSheet (TFKit)
@dynamic backBlock;

/**
 *  block 回调点击的方法
 *
 *  @param block
 */
-(void)TF_CODE_PRE(showInView):(UIView *_Nullable)view block:(_Nullable TFUIActionSheetBackBlock)block{
    if (!view || !block)return;
    [self tf_synthesizeAllCategoryPropertyForSelf];
    self.backBlock = block;
    self.delegate = self;
    [self showInView:view];
}
- (void)actionSheet:(UIActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex{
    if (self.backBlock) {
        NSString *buttonTitle = [actionSheet buttonTitleAtIndex:buttonIndex];
        self.backBlock(actionSheet,buttonIndex,buttonTitle);
    }
}

@end
