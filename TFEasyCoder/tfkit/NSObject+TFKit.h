//
//  NSObject+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (TFKit)

/**
 *  系统版本号和app版本号,提供静态方法访问和属性访问
 */
@property (nonatomic,  copy,readonly)NSString *tf_systemVersion;
@property (nonatomic,  copy,readonly)NSString *tf_appVersion;
+(NSString *)tf_systemVersion;
+(NSString *)tf_appVersion;

/**
 *  获取当前机器型号
 *
 *  @return 当前机器型号名称
 *  需要导入框架 #include <sys/types.h>和#include <sys/sysctl.h>
 */
+ (NSString *)tf_currentDeviceModel;




@end
