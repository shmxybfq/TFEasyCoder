//
//  UIWindow+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIWindow,UIWindow *);

@interface UIWindow (TFEasyCoder)

TF_EC_MSTATIC_INT(UIWindow, UIWindow *);
TF_EC_MINSTANCE_INT(UIWindow,UIWindow *);


TF_EC_CHAIN_PROP_INT(UIWindow ,UIScreen *,screen);
TF_EC_CHAIN_PROP_INT(UIWindow ,double,windowLevel);
TF_EC_CHAIN_PROP_INT(UIWindow ,UIViewController *,rootViewController);



@end