//
//  UIAlertView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAlertView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAlertView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAlertView, UIAlertView *);
TF_EC_MINSTANCE_IMP(UIAlertView, UIAlertView *);


TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSString *,message)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,long long,cancelButtonIndex)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,long long,alertViewStyle)


@end