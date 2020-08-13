//
//  NSObject_TFKit.h
//  GreatVillage
//
//  Created by 融数 on 17/3/7.
//  Copyright © 2017年 大城乡. All rights reserved.
//

#ifndef NSObject_TFKit_h
#define NSObject_TFKit_h


//判断系统
#define x_iOS7    ([[UIDevice currentDevice].systemVersion doubleValue] >= 7.0)
#define x_iOS8    ([[UIDevice currentDevice].systemVersion doubleValue] >= 8.0)
#define x_iOS9    ([[UIDevice currentDevice].systemVersion doubleValue] >= 9.0)
#define x_iOS10   ([[UIDevice currentDevice].systemVersion doubleValue] >= 10.0)
#define x_iOS11   ([[UIDevice currentDevice].systemVersion doubleValue] >= 11.0)
#define x_iOS12   ([[UIDevice currentDevice].systemVersion doubleValue] >= 12.0)
#define x_iOS(Version)   ([[UIDevice currentDevice].systemVersion doubleValue] >= Version)

//判断机型
#define x_iPhoneX inch5_8
#define x_iPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)

//常用尺寸
#define x_bangHeight (x_iPhoneX?24:0)//刘海
#define x_statusBarHeight (x_iPhoneX?44:20)//状态栏
#define x_navBarHeight (x_iPhoneX?88:64)//导航栏
#define x_jawHeight (x_iPhoneX?34:0)//下巴栏
#define x_tabBarHeight (x_iPhoneX?83:49)//tabbar

#define x_sb [UIScreen mainScreen].bounds
#define x_sbs [UIScreen mainScreen].bounds.size
#define x_sbo [UIScreen mainScreen].bounds.origin
#define x_sbw [UIScreen mainScreen].bounds.size.width
#define x_sbh [UIScreen mainScreen].bounds.size.height

//判断屏幕尺寸
#define inch3_5 (MAX(x_sbw, x_sbh) == 480)
#define inch4_0 (MAX(x_sbw, x_sbh) == 568)
#define inch4_7 (MAX(x_sbw, x_sbh) == 667)
#define inch5_5 (MAX(x_sbw, x_sbh) == 736)
#define inch5_8 (MAX(x_sbw, x_sbh) == 812 || MAX(x_sbw, x_sbh) == 896)


/**
 *  zsl-wdl
 *  系统版本号和提供静态方法访问和属性访问
 */
static inline BOOL tf_code_pre(systemVersionBigOrEqual)(CGFloat version){
    return ([[[UIDevice currentDevice] systemVersion] floatValue] >= version);
}

/**
 *  zsl-wdl
 *  常用单利对象
 */
static inline NSNotificationCenter * tf_code_pre(notificationCenter)(){
    return [NSNotificationCenter defaultCenter];
}
static inline UIWindow * tf_code_pre(keyWindow)(){
    return [UIApplication sharedApplication].keyWindow;
}
static inline NSUserDefaults * tf_code_pre(userDefault)(){
    return [NSUserDefaults standardUserDefaults];
}
static inline UIApplication * tf_code_pre(application)(){
    return [UIApplication sharedApplication];
}
static inline id tf_code_pre(appDelegate)(){
    return [UIApplication sharedApplication].delegate;
}



#endif /* NSObject_TFKit_h */
