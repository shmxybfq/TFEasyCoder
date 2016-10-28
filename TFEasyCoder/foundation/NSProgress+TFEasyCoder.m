//
//  NSProgress+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSProgress+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSProgress (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSProgress, NSProgress *);
TF_EC_MINSTANCE_IMP(NSProgress, NSProgress *);



TF_EC_CHAIN_PROP_IMP(NSProgress ,long long,totalUnitCount)
TF_EC_CHAIN_PROP_IMP(NSProgress ,long long,completedUnitCount)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,localizedDescription)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,localizedAdditionalDescription)
TF_EC_CHAIN_PROP_IMP(NSProgress ,BOOL,cancellable)
TF_EC_CHAIN_PROP_IMP(NSProgress ,BOOL,pausable)
TF_EC_CHAIN_PROP_IMP(NSProgress ,NSString *,kind)

@end