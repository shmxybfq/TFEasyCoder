//
//  UITableViewRowAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITableViewRowAction,UITableViewRowAction *);

@interface UITableViewRowAction (TFEasyCoder)

TF_EC_MSTATIC_INT(UITableViewRowAction, UITableViewRowAction *);
TF_EC_MINSTANCE_INT(UITableViewRowAction,UITableViewRowAction *);


TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,UIColor *,backgroundColor);
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,UIVisualEffect *,backgroundEffect);

@end