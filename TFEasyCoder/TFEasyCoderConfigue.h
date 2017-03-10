//
//  TFEasyCoderConfigue.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 17/3/10.
//  Copyright © 2017年 融数. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TFEasyCoderConfigue : NSObject

/**
 * 调试工具配置
 * 调试时,打印NSArray是否将里面的中文转码至显示
 */
@property (nonatomic,assign)BOOL TFDebug_NSArrayLogChinese;
/**
 * 调试工具配置
 * 调试时,打印NSDictionary是否将里面的中文转码至显示
 */

@property (nonatomic,assign)BOOL TFDebug_NSDictionaryLogChinese;
/**
 * 调试工具配置
 * 调试时,在viewDidAppear中是否让view的子视图显示随机色
 */
@property (nonatomic,assign)BOOL TFDebug_VCDidAppearSubviewRandomColor;
/**
 * 调试工具配置
 * 调试时,在viewDidAppear中是否让view的子视图显示边框
 */
@property (nonatomic,assign)BOOL TFDebug_VCDidAppearSubviewDisplayBorder;
/**
 * 调试工具配置
 * 调试时,在viewDidAppear中是否打印控制器名称
 */
@property (nonatomic,assign)BOOL TFDebug_VCDidAppearLogVCName;
/**
 * 调试工具配置
 * 调试时,在viewDidAppear中是否打印view所有子视图
 */
@property (nonatomic,assign)BOOL TFDebug_VCDidAppearLogSubview;
/**
 * 调试工具配置
 * 调试时,在viewDidAppear中是否打印view视图树结构
 */
@property (nonatomic,assign)BOOL TFDebug_VCDidAppearLogSubviewTree;



@end
