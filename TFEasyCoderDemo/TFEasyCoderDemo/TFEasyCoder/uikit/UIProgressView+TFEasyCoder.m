//
//  UIProgressView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIProgressView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIProgressView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIProgressView, UIProgressView *);
TF_EC_MINSTANCE_IMP(UIProgressView, UIProgressView *);


TF_EC_CHAIN_PROP_IMP(UIProgressView ,long long,progressViewStyle)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,float,progress)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIColor *,progressTintColor)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIColor *,trackTintColor)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIImage *,progressImage)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIImage *,trackImage)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,NSProgress *,observedProgress)

@end