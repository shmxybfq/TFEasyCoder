//
//  NSURLSessionTask+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSessionTask+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLSessionTask (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLSessionTask, NSURLSessionTask *);
TF_EC_MINSTANCE_IMP(NSURLSessionTask, NSURLSessionTask *);



TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,float,priority)

@end