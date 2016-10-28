//
//  NSStream+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSStream+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSStream (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSStream, NSStream *);
TF_EC_MINSTANCE_IMP(NSStream, NSStream *);


TF_EC_CHAIN_PROP_IMP(NSStream ,id<NSStreamDelegate>  ,delegate)

@end