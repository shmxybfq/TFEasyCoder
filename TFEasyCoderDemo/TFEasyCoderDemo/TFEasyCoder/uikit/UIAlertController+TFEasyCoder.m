//
//  UIAlertController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAlertController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAlertController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAlertController, UIAlertController *);
TF_EC_MINSTANCE_IMP(UIAlertController, UIAlertController *);



TF_EC_CHAIN_PROP_IMP(UIAlertController ,UIAlertAction *,preferredAction)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,message)


@end