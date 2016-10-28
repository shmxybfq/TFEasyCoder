//
//  UITableViewHeaderFooterView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableViewHeaderFooterView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITableViewHeaderFooterView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITableViewHeaderFooterView, UITableViewHeaderFooterView *);
TF_EC_MINSTANCE_IMP(UITableViewHeaderFooterView, UITableViewHeaderFooterView *);


TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UITableViewHeaderFooterView ,UIView *,backgroundView)


@end