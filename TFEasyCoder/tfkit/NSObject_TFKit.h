//
//  NSObject_TFKit.h
//  GreatVillage
//
//  Created by 融数 on 17/3/7.
//  Copyright © 2017年 大城乡. All rights reserved.
//

#ifndef NSObject_TFKit_h
#define NSObject_TFKit_h

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
