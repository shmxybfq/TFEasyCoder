//
//  UIBarItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIBarItem,UIBarItem *);

@interface UIBarItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UIBarItem, UIBarItem *);
TF_EC_MINSTANCE_INT(UIBarItem,UIBarItem *);


TF_EC_CHAIN_PROP_INT(UIBarItem ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIBarItem ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UIBarItem ,UIImage *,image);
TF_EC_CHAIN_PROP_INT(UIBarItem ,UIImage *,landscapeImagePhone);
TF_EC_CHAIN_PROP_INT(UIBarItem ,UIEdgeInsets,imageInsets);
TF_EC_CHAIN_PROP_INT(UIBarItem ,UIEdgeInsets,landscapeImagePhoneInsets);
TF_EC_CHAIN_PROP_INT(UIBarItem ,long long,tag);

@end