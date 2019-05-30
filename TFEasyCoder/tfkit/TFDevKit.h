
//
//  TFDevKit.h
//  TFEasyCoderDemo
//
//  Created by zhutaofeng on 2019/5/30.
//  Copyright © 2019 融数. All rights reserved.
//

#ifndef TFDevKit_h
#define TFDevKit_h

#ifdef __OBJC__
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"
/**
 *  UserDefaults 获取对象
 *  UserDefaultsGet 查
 *  UserDefaultsSet 增、改
 *  UserDefaultsRemove 删
 */
#ifndef UserDefaults
#define UserDefaults [NSUserDefaults standardUserDefaults]
#endif

#ifndef UserDefaultsGet
#define UserDefaultsGet(key) [UserDefaults objectForKey:key];
#endif

#ifndef UserDefaultsSet
#define UserDefaultsSet(obj,key) [UserDefaults setObject:obj forKey:key];\
[UserDefaults synchronize];
#endif

#ifndef UserDefaultsRemove
#define UserDefaultsRemove(key) [UserDefaults removeObjectForKey:key];\
[UserDefaults synchronize];
#endif


/**
 *  计算分页
 *  @param count 当前已经数据数量
 *  @param countPerPage 每页多少数据
 *  @param min 分页最小值
 *  @return 处理完成字符串
 */
static inline NSString * tf_code_pre(pageIndex)(NSUInteger count,NSUInteger countPerPage,NSUInteger min){
    if (count <= 0) return [NSString stringWithFormat:@"%@",@(min)];
    double page = count / [[NSString stringWithFormat:@"%@",@(countPerPage)]doubleValue];
    double pageNow = ceil(page);
    return [NSString stringWithFormat:@"%ld",(long)pageNow];
}
#endif

#endif /* TFDevKit_h */
