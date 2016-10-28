//
//  UIBarButtonItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIBarButtonItem,UIBarButtonItem *);

@interface UIBarButtonItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UIBarButtonItem, UIBarButtonItem *);
TF_EC_MINSTANCE_INT(UIBarButtonItem,UIBarButtonItem *);


TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,BOOL,enabled)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIEdgeInsets,imageInsets)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,long long,style)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,double,width)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,NSSet *,possibleTitles)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIView *,customView)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,SEL,action)
TF_EC_CHAIN_PROP_INT(UIBarButtonItem ,UIColor *,tintColor)


@end