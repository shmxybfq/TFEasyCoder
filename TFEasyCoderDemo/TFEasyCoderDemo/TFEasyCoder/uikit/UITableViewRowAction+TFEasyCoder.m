//
//  UITableViewRowAction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableViewRowAction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITableViewRowAction (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITableViewRowAction, UITableViewRowAction *);
TF_EC_MINSTANCE_IMP(UITableViewRowAction, UITableViewRowAction *);


TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,UIColor *,backgroundColor)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,UIVisualEffect *,backgroundEffect)

@end