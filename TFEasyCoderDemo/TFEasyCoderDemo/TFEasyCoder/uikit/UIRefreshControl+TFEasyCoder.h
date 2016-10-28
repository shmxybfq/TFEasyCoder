//
//  UIRefreshControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIRefreshControl,UIRefreshControl *);

@interface UIRefreshControl (TFEasyCoder)

TF_EC_MSTATIC_INT(UIRefreshControl, UIRefreshControl *);
TF_EC_MINSTANCE_INT(UIRefreshControl,UIRefreshControl *);


TF_EC_CHAIN_PROP_INT(UIRefreshControl ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UIRefreshControl ,NSAttributedString *,attributedTitle);

@end