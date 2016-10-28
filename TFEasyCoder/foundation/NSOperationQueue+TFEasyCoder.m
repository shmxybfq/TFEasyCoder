//
//  NSOperationQueue+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSOperationQueue+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSOperationQueue (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSOperationQueue, NSOperationQueue *);
TF_EC_MINSTANCE_IMP(NSOperationQueue, NSOperationQueue *);


TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,long long,maxConcurrentOperationCount)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,BOOL,suspended)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,long long,qualityOfService)
TF_EC_CHAIN_PROP_IMP(NSOperationQueue ,dispatch_queue_t ,underlyingQueue)

@end