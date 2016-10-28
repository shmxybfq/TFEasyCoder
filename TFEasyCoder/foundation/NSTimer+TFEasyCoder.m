//
//  NSTimer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTimer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTimer (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTimer, NSTimer *);
TF_EC_MINSTANCE_IMP(NSTimer, NSTimer *);


TF_EC_CHAIN_PROP_IMP(NSTimer ,NSDate *,fireDate)
TF_EC_CHAIN_PROP_IMP(NSTimer ,double,tolerance)

@end