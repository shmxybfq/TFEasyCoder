//
//  UIRefreshControl+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIRefreshControl+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIRefreshControl (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIRefreshControl, UIRefreshControl *);
TF_EC_MINSTANCE_IMP(UIRefreshControl, UIRefreshControl *);


TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UIRefreshControl ,NSAttributedString *,attributedTitle)

@end