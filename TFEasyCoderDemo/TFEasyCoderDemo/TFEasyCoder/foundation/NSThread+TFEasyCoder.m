//
//  NSThread+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSThread+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSThread (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSThread, NSThread *);
TF_EC_MINSTANCE_IMP(NSThread, NSThread *);


TF_EC_CHAIN_PROP_IMP(NSThread ,double,threadPriority)
TF_EC_CHAIN_PROP_IMP(NSThread ,long long,qualityOfService)
TF_EC_CHAIN_PROP_IMP(NSThread ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(NSThread ,unsigned long long,stackSize)

@end