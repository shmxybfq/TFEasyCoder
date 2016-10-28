//
//  UIActivityIndicatorView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIActivityIndicatorView,UIActivityIndicatorView *);

@interface UIActivityIndicatorView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIActivityIndicatorView, UIActivityIndicatorView *);
TF_EC_MINSTANCE_INT(UIActivityIndicatorView,UIActivityIndicatorView *);


TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,long long,activityIndicatorViewStyle);
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,BOOL,hidesWhenStopped);
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,UIColor *,color);


@end