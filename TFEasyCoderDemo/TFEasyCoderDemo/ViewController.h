//
//  ViewController.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/10/28.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <UIKit/UIKit.h>




/**
 *  比例屏幕适配
 *
 */
static inline CGFloat Size6SNEW(CGFloat SIZE) {
    NSInteger width = [UIScreen mainScreen].bounds.size.width;
    if (width == 320) { return SIZE * 0.5 * (320.0/375);}
    if (width == 414) { return SIZE * 0.5 / (375.0/414);}
    return SIZE * 0.5;
}

static inline CGFloat Size6SFont(CGFloat SIZE) {
    NSInteger width = [UIScreen mainScreen].bounds.size.width;
    if (width == 320) { return SIZE * (320.0/375);}
    if (width == 414) { return SIZE / (375.0/414);}
    return SIZE;
}

@interface ViewController : UIViewController


@end

