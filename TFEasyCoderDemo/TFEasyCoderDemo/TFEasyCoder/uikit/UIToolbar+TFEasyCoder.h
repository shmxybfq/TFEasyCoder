//
//  UIToolbar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIToolbar,UIToolbar *);

@interface UIToolbar (TFEasyCoder)

TF_EC_MSTATIC_INT(UIToolbar, UIToolbar *);
TF_EC_MINSTANCE_INT(UIToolbar,UIToolbar *);


TF_EC_CHAIN_PROP_INT(UIToolbar ,long long,barStyle);
TF_EC_CHAIN_PROP_INT(UIToolbar ,NSArray *,items);
TF_EC_CHAIN_PROP_INT(UIToolbar ,BOOL,translucent);
TF_EC_CHAIN_PROP_INT(UIToolbar ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UIToolbar ,UIColor *,barTintColor);
TF_EC_CHAIN_PROP_INT(UIToolbar ,id<UIToolbarDelegate> ,delegate);


@end