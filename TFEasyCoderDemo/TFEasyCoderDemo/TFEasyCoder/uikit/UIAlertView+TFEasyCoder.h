//
//  UIAlertView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_BLOCK(UIAlertView,UIAlertView *);

@interface UIAlertView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAlertView, UIAlertView *);
TF_EC_MINSTANCE_INT(UIAlertView,UIAlertView *);


TF_EC_CHAIN_PROP_INT(UIAlertView ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UIAlertView ,NSString *,message);
TF_EC_CHAIN_PROP_INT(UIAlertView ,long long,cancelButtonIndex);
TF_EC_CHAIN_PROP_INT(UIAlertView ,long long,alertViewStyle);

@end