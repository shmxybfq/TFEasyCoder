//
//  NSURLCache+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLCache+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLCache (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLCache, NSURLCache *);
TF_EC_MINSTANCE_IMP(NSURLCache, NSURLCache *);


TF_EC_CHAIN_PROP_IMP(NSURLCache ,unsigned long long,memoryCapacity)
TF_EC_CHAIN_PROP_IMP(NSURLCache ,unsigned long long,diskCapacity)

@end