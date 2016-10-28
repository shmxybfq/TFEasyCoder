//
//  UIMenuController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMenuController,UIMenuController *);

@interface UIMenuController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMenuController, UIMenuController *);
TF_EC_MINSTANCE_INT(UIMenuController,UIMenuController *);


TF_EC_CHAIN_PROP_INT(UIMenuController ,BOOL,menuVisible);
TF_EC_CHAIN_PROP_INT(UIMenuController ,long long,arrowDirection);
TF_EC_CHAIN_PROP_INT(UIMenuController ,NSArray *,menuItems);

@end