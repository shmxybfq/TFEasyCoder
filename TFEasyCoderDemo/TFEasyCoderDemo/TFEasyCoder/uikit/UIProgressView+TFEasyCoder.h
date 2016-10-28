//
//  UIProgressView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIProgressView,UIProgressView *);

@interface UIProgressView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIProgressView, UIProgressView *);
TF_EC_MINSTANCE_INT(UIProgressView,UIProgressView *);


TF_EC_CHAIN_PROP_INT(UIProgressView ,long long,progressViewStyle);
TF_EC_CHAIN_PROP_INT(UIProgressView ,float,progress);
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIColor *,progressTintColor);
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIColor *,trackTintColor);
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIImage *,progressImage);
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIImage *,trackImage);
TF_EC_CHAIN_PROP_INT(UIProgressView ,NSProgress *,observedProgress);

@end