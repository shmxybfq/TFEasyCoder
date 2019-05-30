//
//  TFGCDKit.h
//  TFEasyCoderDemo
//
//  Created by zhutaofeng on 2019/5/30.
//  Copyright © 2019 融数. All rights reserved.
//

#ifndef TFGCDKit_h
#define TFGCDKit_h
#ifdef __OBJC__
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

static inline void tf_code_pre(delay)(float dur,dispatch_block_t block){
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)((dur) * NSEC_PER_SEC)), dispatch_get_main_queue(), block);
}

#endif
#endif /* TFGCDKit_h */
