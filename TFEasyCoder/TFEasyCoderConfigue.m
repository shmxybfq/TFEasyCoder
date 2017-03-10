//
//  TFEasyCoderConfigue.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 17/3/10.
//  Copyright © 2017年 融数. All rights reserved.
//

#import "TFEasyCoderConfigue.h"

@implementation TFEasyCoderConfigue

/**
 * 配置初值
 *
 */
-(instancetype)init{
    if (self = [super init]) {
        /**
         * 调试工具配置
         * 调试时,打印NSArray是否将里面的中文转码至显示
         */
        self.TFDebug_NSArrayLogChinese = YES;
        /**
         * 调试工具配置
         * 调试时,打印NSDictionary是否将里面的中文转码至显示
         */
        
        self.TFDebug_NSDictionaryLogChinese = YES;
        /**
         * 调试工具配置
         * 调试时,在viewDidAppear中是否让view的子视图显示随机色
         */
        self.TFDebug_VCDidAppearSubviewRandomColor = NO;
        /**
         * 调试工具配置
         * 调试时,在viewDidAppear中是否让view的子视图显示边框
         */
        self.TFDebug_VCDidAppearSubviewDisplayBorder = NO;
        /**
         * 调试工具配置
         * 调试时,在viewDidAppear中是否打印控制器名称
         */
        self.TFDebug_VCDidAppearLogVCName = YES;
        /**
         * 调试工具配置
         * 调试时,在viewDidAppear中是否打印view所有子视图
         */
        self.TFDebug_VCDidAppearLogSubview = NO;
        /**
         * 调试工具配置
         * 调试时,在viewDidAppear中是否打印view视图树结构
         */
        self.TFDebug_VCDidAppearLogSubviewTree = NO;
    }
    return self;
}

@end
