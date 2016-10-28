//
//  NSProcessInfo+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSProcessInfo+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSProcessInfo (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSProcessInfo, NSProcessInfo *);
TF_EC_MINSTANCE_IMP(NSProcessInfo, NSProcessInfo *);


TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,NSString *,processName)

@end