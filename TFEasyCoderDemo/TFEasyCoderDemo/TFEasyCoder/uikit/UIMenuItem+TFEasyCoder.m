//
//  UIMenuItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMenuItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMenuItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMenuItem, UIMenuItem *);
TF_EC_MINSTANCE_IMP(UIMenuItem, UIMenuItem *);


TF_EC_CHAIN_PROP_IMP(UIMenuItem ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,SEL,action)


@end