//
//  UIAlertAction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAlertAction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAlertAction (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAlertAction, UIAlertAction *);
TF_EC_MINSTANCE_IMP(UIAlertAction, UIAlertAction *);


TF_EC_CHAIN_PROP_IMP(UIAlertAction ,BOOL,enabled)

@end