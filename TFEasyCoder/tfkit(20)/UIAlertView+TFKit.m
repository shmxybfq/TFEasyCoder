//
//  UIAlertView+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/9.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAlertView+TFKit.h"
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import "NSObject+TFExecute.h"


@implementation UIAlertView (TFKit)
@dynamic backBlock;
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
                                          message:(NSString *)message{
    
    UIAlertView *alert = [[UIAlertView alloc]initWithTitle:title
                                                   message:message
                                                  delegate:nil
                                         cancelButtonTitle:nil
                                         otherButtonTitles:nil, nil];
    [alert show];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(dur * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [alert dismissWithClickedButtonIndex:0 animated:YES];
    });
    return  alert;
}


-(void)TF_CODE_PRE(showWithBlock):(TFUIAlertViewBackBlock)block{
    if (!block)return;
    [self tf_synthesizeAllCategoryPropertyForSelf];
    self.backBlock = block;
    self.delegate = self;
    [self show];

}
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    if (self.backBlock) {
        NSString *buttonTitle = [alertView buttonTitleAtIndex:buttonIndex];
        self.backBlock(alertView,buttonIndex,buttonTitle);
    }
}

@end
