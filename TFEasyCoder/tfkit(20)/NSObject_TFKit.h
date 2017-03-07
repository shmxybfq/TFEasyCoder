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
static inline BOOL TF_CODE_PRE(systemVersionBigOrEqual)(CGFloat version){
    return ([[[UIDevice currentDevice] systemVersion] floatValue] >= version);
}

/**
 *  zsl-wdl
 *  常用单利对象
 */
static inline NSNotificationCenter * TF_CODE_PRE(notificationCenter)(){
    return [NSNotificationCenter defaultCenter];
}
static inline UIWindow * TF_CODE_PRE(keyWindow)(){
    return [UIApplication sharedApplication].keyWindow;
}
static inline NSUserDefaults * TF_CODE_PRE(userDefault)(){
    return [NSUserDefaults standardUserDefaults];
}
static inline UIApplication * TF_CODE_PRE(application)(){
    return [UIApplication sharedApplication];
}
static inline id TF_CODE_PRE(appDelegate)(){
    return [UIApplication sharedApplication].delegate;
}

#endif /* NSObject_TFKit_h */
