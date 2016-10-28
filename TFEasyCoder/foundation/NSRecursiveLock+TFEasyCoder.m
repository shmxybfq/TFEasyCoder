//
//  NSRecursiveLock+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSRecursiveLock+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSRecursiveLock (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSRecursiveLock, NSRecursiveLock *);
TF_EC_MINSTANCE_IMP(NSRecursiveLock, NSRecursiveLock *);


TF_EC_CHAIN_PROP_IMP(NSRecursiveLock ,NSString *,name)

@end