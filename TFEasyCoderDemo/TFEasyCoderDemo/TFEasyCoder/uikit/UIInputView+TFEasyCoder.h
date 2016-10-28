//
//  UIInputView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIInputView,UIInputView *);

@interface UIInputView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIInputView, UIInputView *);
TF_EC_MINSTANCE_INT(UIInputView,UIInputView *);


TF_EC_CHAIN_PROP_INT(UIInputView ,BOOL,allowsSelfSizing);


@end