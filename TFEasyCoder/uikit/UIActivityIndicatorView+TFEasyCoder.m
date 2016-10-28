//
//  UIActivityIndicatorView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIActivityIndicatorView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIActivityIndicatorView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIActivityIndicatorView, UIActivityIndicatorView *);
TF_EC_MINSTANCE_IMP(UIActivityIndicatorView, UIActivityIndicatorView *);


TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,long long,activityIndicatorViewStyle)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,BOOL,hidesWhenStopped)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,UIColor *,color)


@end