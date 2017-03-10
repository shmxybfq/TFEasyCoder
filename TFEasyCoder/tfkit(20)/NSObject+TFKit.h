//
//  NSObject+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"
@interface NSObject (TFKit)

/**
 *  快速创建实例
 */
+(instancetype)creatInstance;
/**
 *  快速创建实例
 */
+(instancetype)shareInstance;
#pragma mark 系统信息 --
/**
 *  系统版本号和提供静态方法访问和属性访问
 */
+(NSString *)TF_CODE_PRE(systemVersion);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(systemVersion);

/**
 *  zsl-wdl
 *  系统版本号和提供静态方法访问和属性访问
 */
+(BOOL)TF_CODE_PRE(systemVersionBigOrEqual):(CGFloat)version;


/**
 *  app版本号,提供静态方法访问和属性访问
 */
+(NSString *)TF_CODE_PRE(appVersion);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(appVersion);

#pragma mark 屏幕尺寸的获取 --
/**
 *  zsl-wdl
 *  机型尺寸判断
 */
@property (nonatomic,assign,readonly)BOOL TF_CODE_PRE(isIphone6pSize);
@property (nonatomic,assign,readonly)BOOL TF_CODE_PRE(isIphone6Size);
@property (nonatomic,assign,readonly)BOOL TF_CODE_PRE(isIphone5Size);
@property (nonatomic,assign,readonly)BOOL TF_CODE_PRE(isIphone4Size);

+(BOOL)TF_CODE_PRE(isIphone6pSize);
+(BOOL)TF_CODE_PRE(isIphone6Size);
+(BOOL)TF_CODE_PRE(isIphone5Size);
+(BOOL)TF_CODE_PRE(isIphone4Size);

/**
 *  zsl-wdl
 *  常用单利对象
 */
@property (nonatomic,weak,readonly)NSNotificationCenter * TF_CODE_PRE(notificationCenter);
@property (nonatomic,weak,readonly)UIWindow * TF_CODE_PRE(keyWindow);
@property (nonatomic,weak,readonly)NSUserDefaults * TF_CODE_PRE(userDefault);
@property (nonatomic,weak,readonly)UIApplication * TF_CODE_PRE(application);
@property (nonatomic,weak,readonly)id TF_CODE_PRE(appDelegate);

+(NSNotificationCenter *)TF_CODE_PRE(notificationCenter);
+(UIWindow *)TF_CODE_PRE(keyWindow);
+(NSUserDefaults *)TF_CODE_PRE(userDefault);
+(UIApplication *)TF_CODE_PRE(application);
+(id)TF_CODE_PRE(appDelegate);

/**
 *  获取当前机器型号
 *
 *  @return 当前机器型号名称
 *  需要导入框架 #include <sys/types.h>和#include <sys/sysctl.h>
 */
+ (NSString *)TF_CODE_PRE(currentDeviceModel);




@end
