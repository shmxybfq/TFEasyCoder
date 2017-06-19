//
//  UIActionSheet+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/9.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIActionSheet+TFKit.h"
#import "NSObject+TFExecute.h"


@implementation UIActionSheet (TFKit)

TF_SYNTHESIZE_CATEGORY_PROPERTY(backBlock, setBackBlock, OBJC_ASSOCIATION_COPY, TFUIActionSheetBackBlock)

+(UIActionSheet *_Nullable)TF_CODE_PRE(showWithTitle):(NSString *_Nullable)title
inView:(UIView   *_Nullable)inView
cancelButtonTitle:(NSString *_Nullable)cancle
destructiveButtonTitle:(NSString *_Nullable)des
otherButtonTitles:(NSArray  *_Nullable)othter
block:(_Nullable TFUIActionSheetBackBlock)block{
    
    int btCount = 0;
    UIActionSheet *sheet = [[UIActionSheet alloc]init];
    sheet.delegate = (id)self;
    sheet.title = title;
    sheet.backBlock = block;
    if (cancle) {
        sheet.cancelButtonIndex = btCount;
        [sheet addButtonWithTitle:cancle];
        btCount += 1;
    }
    if (des) {
        sheet.destructiveButtonIndex = btCount;
        [sheet addButtonWithTitle:des];
        btCount += 1;
    }
    for (int i = 0; i < othter.count; i++) {
        [sheet addButtonWithTitle:othter[i]];
    }
    [sheet TF_CODE_PRE(showInView):inView?inView:[UIApplication sharedApplication].keyWindow block:block];
    return sheet;
}

/**
 *  block 回调点击的方法
 *
 *  @param block
 */
-(void)TF_CODE_PRE(showInView):(UIView *_Nullable)view block:(_Nullable TFUIActionSheetBackBlock)block{
    if (!view || !block)return;
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
