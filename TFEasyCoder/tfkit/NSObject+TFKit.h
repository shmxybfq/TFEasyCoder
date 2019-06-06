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
+(NSString *)tf_code_pre(systemVersion);
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(systemVersion);

/**
 *  zsl-wdl
 *  系统版本号和提供静态方法访问和属性访问
 */
+(BOOL)tf_code_pre(systemVersionBigOrEqual):(CGFloat)version;


/**
 *  app版本号,提供静态方法访问和属性访问
 */
+(NSString *)tf_code_pre(appVersion);
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(appVersion);

+(NSString *)tf_code_pre(appBundleVersion);
@property (nonatomic,  copy,readonly)NSString *tf_code_pre(appBundleVersion);

#pragma mark 屏幕尺寸的获取 --
/**
 *  zsl-wdl
 *  机型尺寸判断
 */
@property (nonatomic,assign,readonly)BOOL tf_code_pre(isIphone6pSize);
@property (nonatomic,assign,readonly)BOOL tf_code_pre(isIphone6Size);
@property (nonatomic,assign,readonly)BOOL tf_code_pre(isIphone5Size);
@property (nonatomic,assign,readonly)BOOL tf_code_pre(isIphone4Size);

+(BOOL)tf_code_pre(isIphone6pSize);
+(BOOL)tf_code_pre(isIphone6Size);
+(BOOL)tf_code_pre(isIphone5Size);
+(BOOL)tf_code_pre(isIphone4Size);

/**
 *  zsl-wdl
 *  常用单利对象
 */
@property (nonatomic,weak,readonly)NSNotificationCenter * tf_code_pre(notificationCenter);
@property (nonatomic,weak,readonly)UIWindow * tf_code_pre(keyWindow);
@property (nonatomic,weak,readonly)NSUserDefaults * tf_code_pre(userDefault);
@property (nonatomic,weak,readonly)UIApplication * tf_code_pre(application);
@property (nonatomic,weak,readonly)id tf_code_pre(appDelegate);

+(NSNotificationCenter *)tf_code_pre(notificationCenter);
+(UIWindow *)tf_code_pre(keyWindow);
+(NSUserDefaults *)tf_code_pre(userDefault);
+(UIApplication *)tf_code_pre(application);
+(id)tf_code_pre(appDelegate);

/**
 *  获取当前机器型号
 *
 *  @return 当前机器型号名称
 *  需要导入框架 #include <sys/types.h>和#include <sys/sysctl.h>
 */
+ (NSString *)tf_code_pre(currentDeviceModel);


/**
 *  交换类方法和交换实例方法
 */
+(BOOL)tf_code_pre(classMethodExchange):(SEL)originSel toClass:(Class)toClass toSel:(SEL)toSel;
+(BOOL)tf_code_pre(instanceMethodExchange):(SEL)originSel toClass:(Class)toClass toSel:(SEL)toSel;

@end
