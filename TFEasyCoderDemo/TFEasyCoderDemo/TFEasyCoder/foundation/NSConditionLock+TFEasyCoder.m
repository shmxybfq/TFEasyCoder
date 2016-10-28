//
//  NSConditionLock+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSConditionLock+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSConditionLock (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSConditionLock, NSConditionLock *);
TF_EC_MINSTANCE_IMP(NSConditionLock, NSConditionLock *);


TF_EC_CHAIN_PROP_IMP(NSConditionLock ,NSString *,name)

@end