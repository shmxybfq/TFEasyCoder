//
//  NSPointerArray+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPointerArray+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPointerArray (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPointerArray, NSPointerArray *);
TF_EC_MINSTANCE_IMP(NSPointerArray, NSPointerArray *);


TF_EC_CHAIN_PROP_IMP(NSPointerArray ,unsigned long long,count)

@end