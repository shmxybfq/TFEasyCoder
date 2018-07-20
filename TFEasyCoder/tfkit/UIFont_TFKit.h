//
//  UIFont_TFKit.h
//  heroios
//
//  Created by zhutaofeng on 2018/5/15.
//  Copyright © 2018年 zhutaofeng. All rights reserved.
//

#ifndef UIFont_TFKit_h
#define UIFont_TFKit_h


static inline UIFont * tf_code_pre(font)(CGFloat size){
    return [UIFont systemFontOfSize:size];
}

static inline UIFont * tf_code_pre(fontBold)(CGFloat size){
    return  [UIFont boldSystemFontOfSize:size];
}

#endif /* UIFont_TFKit_h */
