//
//  UINavigationBar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UINavigationBar,UINavigationBar *);

@interface UINavigationBar (TFEasyCoder)

TF_EC_MSTATIC_INT(UINavigationBar, UINavigationBar *);
TF_EC_MINSTANCE_INT(UINavigationBar,UINavigationBar *);


TF_EC_CHAIN_PROP_INT(UINavigationBar ,long long,barStyle);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,id<UINavigationBarDelegate> *,delegate);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,BOOL,translucent);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSArray *,items);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIColor *,barTintColor);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIImage *,shadowImage);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,NSDictionary *,titleTextAttributes);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIImage *,backIndicatorImage);
TF_EC_CHAIN_PROP_INT(UINavigationBar ,UIImage *,backIndicatorTransitionMaskImage);

@end