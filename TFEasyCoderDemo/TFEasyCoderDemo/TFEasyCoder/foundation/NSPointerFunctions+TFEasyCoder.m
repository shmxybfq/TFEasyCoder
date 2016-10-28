//
//  NSPointerFunctions+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPointerFunctions+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPointerFunctions (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPointerFunctions, NSPointerFunctions *);
TF_EC_MINSTANCE_IMP(NSPointerFunctions, NSPointerFunctions *);


TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,BOOL,usesStrongWriteBarrier)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,BOOL,usesWeakReadAndWriteBarriers)

@end