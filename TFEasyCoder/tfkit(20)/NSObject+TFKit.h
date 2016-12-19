//
//  NSObject+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"
@interface NSObject (TFKit)

#pragma mark 系统信息 --
/**
 *  系统版本号和app版本号,提供静态方法访问和属性访问
 */
+(NSString *)TF_CODE_PRE(systemVersion);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(systemVersion);


+(NSString *)TF_CODE_PRE(appVersion);
@property (nonatomic,  copy,readonly)NSString *TF_CODE_PRE(appVersion);
/**
 *  获取当前机器型号
 *
 *  @return 当前机器型号名称
 *  需要导入框架 #include <sys/types.h>和#include <sys/sysctl.h>
 */
+ (NSString *)TF_CODE_PRE(currentDeviceModel);




@end
