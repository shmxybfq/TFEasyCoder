//
//  UIResponder+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIResponder+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIResponder (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIResponder, UIResponder *);
TF_EC_MINSTANCE_IMP(UIResponder, UIResponder *);


TF_EC_CHAIN_PROP_IMP(UIResponder ,NSUserActivity *,userActivity)


@end