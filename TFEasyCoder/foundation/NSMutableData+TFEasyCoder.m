//
//  NSMutableData+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableData+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableData (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableData, NSMutableData *);
TF_EC_MINSTANCE_IMP(NSMutableData, NSMutableData *);


TF_EC_CHAIN_PROP_IMP(NSMutableData ,unsigned long long,length)

@end