//
//  NSKeyedUnarchiver+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSKeyedUnarchiver+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSKeyedUnarchiver (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSKeyedUnarchiver, NSKeyedUnarchiver *);
TF_EC_MINSTANCE_IMP(NSKeyedUnarchiver, NSKeyedUnarchiver *);


TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,id<NSKeyedUnarchiverDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSKeyedUnarchiver ,BOOL,requiresSecureCoding)

@end