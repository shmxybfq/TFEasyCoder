//
//  UINavigationItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UINavigationItem,UINavigationItem *);

@interface UINavigationItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UINavigationItem, UINavigationItem *);
TF_EC_MINSTANCE_INT(UINavigationItem,UINavigationItem *);


TF_EC_CHAIN_PROP_INT(UINavigationItem ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UINavigationItem ,UIView *,titleView);
TF_EC_CHAIN_PROP_INT(UINavigationItem ,NSString *,prompt);
TF_EC_CHAIN_PROP_INT(UINavigationItem ,UIBarButtonItem *,backBarButtonItem);
TF_EC_CHAIN_PROP_INT(UINavigationItem ,BOOL,hidesBackButton);
TF_EC_CHAIN_PROP_INT(UINavigationItem ,NSArray *,leftBarButtonItems);
TF_EC_CHAIN_PROP_INT(UINavigationItem ,NSArray *,rightBarButtonItems);
TF_EC_CHAIN_PROP_INT(UINavigationItem ,BOOL,leftItemsSupplementBackButton);
TF_EC_CHAIN_PROP_INT(UINavigationItem ,UIBarButtonItem *,leftBarButtonItem);
TF_EC_CHAIN_PROP_INT(UINavigationItem ,UIBarButtonItem *,rightBarButtonItem);

@end