//
//  UITableViewHeaderFooterView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITableViewHeaderFooterView,UITableViewHeaderFooterView *);

@interface UITableViewHeaderFooterView (TFEasyCoder)

TF_EC_MSTATIC_INT(UITableViewHeaderFooterView, UITableViewHeaderFooterView *);
TF_EC_MINSTANCE_INT(UITableViewHeaderFooterView,UITableViewHeaderFooterView *);


TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_INT(UITableViewHeaderFooterView ,UIView *,backgroundView)

@end