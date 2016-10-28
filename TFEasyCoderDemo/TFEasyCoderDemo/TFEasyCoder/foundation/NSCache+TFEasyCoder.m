//
//  NSCache+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCache+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCache (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCache, NSCache *);
TF_EC_MINSTANCE_IMP(NSCache, NSCache *);


TF_EC_CHAIN_PROP_IMP(NSCache ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(NSCache ,id<NSCacheDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSCache ,unsigned long long,totalCostLimit)
TF_EC_CHAIN_PROP_IMP(NSCache ,unsigned long long,countLimit)
TF_EC_CHAIN_PROP_IMP(NSCache ,BOOL,evictsObjectsWithDiscardedContent)

@end