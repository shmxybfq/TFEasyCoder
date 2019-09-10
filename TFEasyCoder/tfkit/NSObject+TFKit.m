//
//  NSObject+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/8.
//  Copyright © 2016年 ztf. All rights reserved.
//


#import "NSObject+TFKit.h"
#include <sys/types.h>
#include <sys/sysctl.h>
@implementation NSObject (TFKit)

/**
 *  系统版本号和app版本号,提供静态方法访问和属性访问
 */
+(NSString *)tf_code_pre(systemVersion){
    return [UIDevice currentDevice].systemVersion;
}
+(BOOL)tf_code_pre(systemVersionBigOrEqual):(CGFloat)version{
    return ([[[UIDevice currentDevice] systemVersion] floatValue] >= version);
}
/**
 *  app版本号,提供静态方法访问和属性访问
 */
-(NSString *)tf_code_pre(systemVersion){
    return [UIDevice currentDevice].systemVersion;
}


+(NSString *)tf_code_pre(appVersion){
    NSDictionary *info = [[NSBundle mainBundle] infoDictionary];
    NSString *version = [info objectForKey:@"CFBundleShortVersionString"];
    return version;
}
-(NSString *)tf_code_pre(appVersion){
    return [NSObject tf_code_pre(appVersion)];
}

+(NSString *)tf_code_pre(appBundleVersion){
    NSDictionary *info = [[NSBundle mainBundle] infoDictionary];
    NSString *version = [info objectForKey:@"CFBundleVersion"];
    return version;
}
-(NSString *)tf_code_pre(appBundleVersion){
    return [NSObject tf_code_pre(appBundleVersion)];
}

/**
 *  zsl-wdl
 *  机型尺寸判断
 */
+(BOOL)tf_code_pre(isIphone6pSize){
    return ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO);
}
-(BOOL)tf_code_pre(isIphone6pSize){
    return ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO);
}
+(BOOL)tf_code_pre(isIphone6Size){
    return ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO);
}
-(BOOL)tf_code_pre(isIphone6Size){
    return ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO);
}
+(BOOL)tf_code_pre(isIphone5Size){
    return ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO);
}
-(BOOL)tf_code_pre(isIphone5Size){
    return ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO);
}
+(BOOL)tf_code_pre(isIphone4Size){
    return ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO);
}
-(BOOL)tf_code_pre(isIphone4Size){
    return ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO);
}

/**
 *  zsl-wdl
 *  常用单利对象
 */
+(NSNotificationCenter *)tf_code_pre(notificationCenter){
    return [NSNotificationCenter defaultCenter];
}
-(NSNotificationCenter *)tf_code_pre(notificationCenter){
    return [NSNotificationCenter defaultCenter];
}
+(UIWindow *)tf_code_pre(keyWindow){
    return [UIApplication sharedApplication].keyWindow;
}
-(UIWindow *)tf_code_pre(keyWindow){
    return [UIApplication sharedApplication].keyWindow;
}
+(NSUserDefaults *)tf_code_pre(userDefault){
    return [NSUserDefaults standardUserDefaults];
}
-(NSUserDefaults *)tf_code_pre(userDefault){
    return [NSUserDefaults standardUserDefaults];
}
+(UIApplication *)tf_code_pre(application){
    return [UIApplication sharedApplication];
}
-(UIApplication *)tf_code_pre(application){
    return [UIApplication sharedApplication];
}
+(id)tf_code_pre(appDelegate){
    return [UIApplication sharedApplication].delegate;
}
-(id)tf_code_pre(appDelegate){
    return [UIApplication sharedApplication].delegate;
}


/**
 *  获取当前机器型号
 *
 *  @return 当前机器型号名称
 *  需要导入框架 #include <sys/types.h>和#include <sys/sysctl.h>
 */
+ (NSString *)tf_code_pre(currentDeviceModel){
    int mib[2];
    size_t len;
    char *machine;
    
    mib[0] = CTL_HW;
    mib[1] = HW_MACHINE;
    sysctl(mib, 2, NULL, &len, NULL, 0);
    machine = malloc(len);
    sysctl(mib, 2, machine, &len, NULL, 0);
    
    NSString *platform = [NSString stringWithCString:machine encoding:NSASCIIStringEncoding];
    free(machine);
    
    //iphone
    if ([platform isEqualToString:@"iPhone1,1"]) return @"iPhone 2G (A1203)";
    if ([platform isEqualToString:@"iPhone1,2"]) return @"iPhone 3G (A1241/A1324)";
    if ([platform isEqualToString:@"iPhone2,1"]) return @"iPhone 3GS (A1303/A1325)";
    if ([platform isEqualToString:@"iPhone3,1"]) return @"iPhone 4 (A1332)";
    if ([platform isEqualToString:@"iPhone3,2"]) return @"iPhone 4 (A1332)";
    if ([platform isEqualToString:@"iPhone3,3"]) return @"iPhone 4 (A1349)";
    if ([platform isEqualToString:@"iPhone4,1"]) return @"iPhone 4S (A1387/A1431)";
    if ([platform isEqualToString:@"iPhone5,1"]) return @"iPhone 5 (A1428)";
    if ([platform isEqualToString:@"iPhone5,2"]) return @"iPhone 5 (A1429/A1442)";
    if ([platform isEqualToString:@"iPhone5,3"]) return @"iPhone 5c (A1456/A1532)";
    if ([platform isEqualToString:@"iPhone5,4"]) return @"iPhone 5c (A1507/A1516/A1526/A1529)";
    if ([platform isEqualToString:@"iPhone6,1"]) return @"iPhone 5s (A1453/A1533)";
    if ([platform isEqualToString:@"iPhone6,2"]) return @"iPhone 5s (A1457/A1518/A1528/A1530)";
    if ([platform isEqualToString:@"iPhone7,1"]) return @"iPhone 6 Plus (A1522/A1524)";
    if ([platform isEqualToString:@"iPhone7,2"]) return @"iPhone 6 (A1549/A1586)";
    
    if ([platform isEqualToString:@"iPhone8,1"]) return @"iPhone 6s";
    if ([platform isEqualToString:@"iPhone8,2"]) return @"iPhone 6s Plus";
    if ([platform isEqualToString:@"iPhone8,4"]) return @"iPhone SE";
    if ([platform isEqualToString:@"iPhone9,1"]) return @"iPhone 7";
    if ([platform isEqualToString:@"iPhone9,2"]) return @"iPhone 7 Plus";
    if ([platform isEqualToString:@"iPhone9,3"]) return @"iPhone 7";
    if ([platform isEqualToString:@"iPhone9,4"]) return @"iPhone 7 Plus";
    
    if ([platform isEqualToString:@"iPhone10,1"]) return @"iPhone 8 (A1863/A1906/A1907)";         // Global
    if ([platform isEqualToString:@"iPhone10,2"]) return @"iPhone 8 Plus (A1864/A1898/A1899)";    // Global
    if ([platform isEqualToString:@"iPhone10,3"]) return @"iPhone X (A1865/A1902)";         // Global
    if ([platform isEqualToString:@"iPhone10,4"]) return @"iPhone 8 (A1905)";         // GSM
    if ([platform isEqualToString:@"iPhone10,5"]) return @"iPhone 8 Plus (A1897)";    // GSM
    if ([platform isEqualToString:@"iPhone10,6"]) return @"iPhone X (A1901)";         // GSM
    if ([platform isEqualToString:@"iPhone11,2"]) return @"iPhone XS (A1920/A2097/A2098/A2100)";
    if ([platform isEqualToString:@"iPhone11,4"]) return @"iPhone XS Max";
    if ([platform isEqualToString:@"iPhone11,6"]) return @"iPhone XS Max (A1921/A2101/A2102/A2104)";
    if ([platform isEqualToString:@"iPhone11,8"]) return @"iPhone XR (A1984/A2105/A2106/A2108)";
    
    //iwatch
    if ([platform isEqualToString:@"Watch1,1"]) return @"Apple Watch 38mm";
    if ([platform isEqualToString:@"Watch1,2"]) return @"Apple Watch 42mm";
    if ([platform isEqualToString:@"Watch2,3"]) return @"Apple Watch Series 2 38mm";
    if ([platform isEqualToString:@"Watch2,4"]) return @"Apple Watch Series 2 42mm";
    if ([platform isEqualToString:@"Watch2,6"]) return @"Apple Watch Series 1 38mm";
    if ([platform isEqualToString:@"Watch1,7"]) return @"Apple Watch Series 1 42mm";
    
    //ipod
    if ([platform isEqualToString:@"iPod1,1"])   return @"iPod Touch 1G (A1213)";
    if ([platform isEqualToString:@"iPod2,1"])   return @"iPod Touch 2G (A1288)";
    if ([platform isEqualToString:@"iPod3,1"])   return @"iPod Touch 3G (A1318)";
    if ([platform isEqualToString:@"iPod4,1"])   return @"iPod Touch 4G (A1367)";
    if ([platform isEqualToString:@"iPod5,1"])   return @"iPod Touch 5G (A1421/A1509)";
    if ([platform isEqualToString:@"iPod7,1"])   return @"iPod touch 6"@"iPod touch 6";
    
    //ipad
    if ([platform isEqualToString:@"iPad1,1"])   return @"iPad 1G (A1219/A1337)";
    if ([platform isEqualToString:@"iPad2,1"])   return @"iPad 2 (A1395)";
    if ([platform isEqualToString:@"iPad2,2"])   return @"iPad 2 (A1396)";
    if ([platform isEqualToString:@"iPad2,3"])   return @"iPad 2 (A1397)";
    if ([platform isEqualToString:@"iPad2,4"])   return @"iPad 2 (A1395+New Chip)";
    if ([platform isEqualToString:@"iPad2,5"])   return @"iPad Mini 1G (A1432)";
    if ([platform isEqualToString:@"iPad2,6"])   return @"iPad Mini 1G (A1454)";
    if ([platform isEqualToString:@"iPad2,7"])   return @"iPad Mini 1G (A1455)";
    
    if ([platform isEqualToString:@"iPad3,1"])   return @"iPad 3 (A1416)";
    if ([platform isEqualToString:@"iPad3,2"])   return @"iPad 3 (A1403)";
    if ([platform isEqualToString:@"iPad3,3"])   return @"iPad 3 (A1430)";
    if ([platform isEqualToString:@"iPad3,4"])   return @"iPad 4 (A1458)";
    if ([platform isEqualToString:@"iPad3,5"])   return @"iPad 4 (A1459)";
    if ([platform isEqualToString:@"iPad3,6"])   return @"iPad 4 (A1460)";
    
    if ([platform isEqualToString:@"iPad4,1"])   return @"iPad Air (A1474)";
    if ([platform isEqualToString:@"iPad4,2"])   return @"iPad Air (A1475)";
    if ([platform isEqualToString:@"iPad4,3"])   return @"iPad Air (A1476)";
    if ([platform isEqualToString:@"iPad4,4"])   return @"iPad Mini 2G (A1489)";
    if ([platform isEqualToString:@"iPad4,5"])   return @"iPad Mini 2G (A1490)";
    if ([platform isEqualToString:@"iPad4,6"])   return @"iPad Mini 2G (A1491)";
    if ([platform isEqualToString:@"iPad4,7"])   return @"iPad mini 3";
    if ([platform isEqualToString:@"iPad4,8"])   return @"iPad mini 3";
    if ([platform isEqualToString:@"iPad4,9"])   return @"iPad mini 3";
    
    if ([platform isEqualToString:@"iPad5,1"])   return @"iPad mini 4";
    if ([platform isEqualToString:@"iPad5,2"])   return @"iPad mini 4";
    if ([platform isEqualToString:@"iPad5,3"])   return @"iPad Air 2";
    if ([platform isEqualToString:@"iPad5,4"])   return @"iPad Air 2";
    
    if ([platform isEqualToString:@"iPad6,3"])   return @"iPad Pro (9.7 inch)";
    if ([platform isEqualToString:@"iPad6,4"])   return @"iPad Pro (9.7 inch)";
    if ([platform isEqualToString:@"iPad6,7"])   return @"iPad Pro (12.9 inch)";
    if ([platform isEqualToString:@"iPad6,8"])   return @"iPad Pro (12.9 inch)";
    
    if ([platform isEqualToString:@"iPad6,11"])   return @"iPad (5th generation) (A1822)";
    if ([platform isEqualToString:@"iPad6,12"])   return @"iPad (5th generation) (A1823)";
    
    //appletv
    if ([platform isEqualToString:@"AppleTV2,1"])   return @"Apple TV 2";
    if ([platform isEqualToString:@"AppleTV3,1"])   return @"Apple TV 3";
    if ([platform isEqualToString:@"AppleTV3,2"])   return @"Apple TV 3";
    if ([platform isEqualToString:@"AppleTV5,3"])   return @"Apple TV 4";
    
    if ([platform isEqualToString:@"i386"])      return @"iPhone Simulator";
    if ([platform isEqualToString:@"x86_64"])    return @"iPhone Simulator";
    return platform;
}




/**
 *  交换类方法和交换实例方法
 */
+(BOOL)tf_code_pre(instanceMethodExchange):(SEL)originSel toClass:(Class)toClass  toSel:(SEL)toSel{
    Method originMethod = class_getInstanceMethod([self class], originSel);
    Method toMethod = class_getInstanceMethod(toClass, toSel);
    BOOL added = class_addMethod([self class], originSel, method_getImplementation(toMethod), method_getTypeEncoding(toMethod));
    if (!added) {
        method_exchangeImplementations(originMethod, toMethod);
    }else{
        class_replaceMethod(self, toSel, method_getImplementation(originMethod), method_getTypeEncoding(originMethod));
    }
    return YES;
}

+(BOOL)tf_code_pre(classMethodExchange):(SEL)originSel toClass:(Class)toClass  toSel:(SEL)toSel{
    Method originMethod = class_getClassMethod([self class], originSel);
    Method toMethod = class_getClassMethod(toClass, toSel);
    Class metaClass = objc_getMetaClass(NSStringFromClass([self class]).UTF8String);
    IMP toImp = method_getImplementation(toMethod);
    const char *toTypeEncoding = method_getTypeEncoding(toMethod);
    BOOL addMethod = class_addMethod(metaClass,originSel,toImp,toTypeEncoding);
    if (!addMethod) {
        method_exchangeImplementations(originMethod, toMethod);
    }else{
        IMP originImp = method_getImplementation(originMethod);
        const char *originTypeEncoding = method_getTypeEncoding(originMethod);
        class_replaceMethod([self class],toSel,originImp,originTypeEncoding);
    }
    return YES;
}


@end
