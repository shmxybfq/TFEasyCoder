//
//  NSOperation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSOperation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSOperation (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSOperation, NSOperation *);
TF_EC_MINSTANCE_IMP(NSOperation, NSOperation *);


TF_EC_CHAIN_PROP_IMP(NSOperation ,long long,queuePriority)
TF_EC_CHAIN_PROP_IMP(NSOperation ,double,threadPriority)
TF_EC_CHAIN_PROP_IMP(NSOperation ,long long,qualityOfService)
TF_EC_CHAIN_PROP_IMP(NSOperation ,NSString *,name)

@end