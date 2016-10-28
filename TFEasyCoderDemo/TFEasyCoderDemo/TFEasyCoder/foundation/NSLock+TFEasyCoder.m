//
//  NSLock+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLock+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSLock (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSLock, NSLock *);
TF_EC_MINSTANCE_IMP(NSLock, NSLock *);


TF_EC_CHAIN_PROP_IMP(NSLock ,NSString *,name)

@end