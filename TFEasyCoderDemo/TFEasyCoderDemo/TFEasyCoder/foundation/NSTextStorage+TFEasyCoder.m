//
//  NSTextStorage+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTextStorage+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTextStorage (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTextStorage, NSTextStorage *);
TF_EC_MINSTANCE_IMP(NSTextStorage, NSTextStorage *);


TF_EC_CHAIN_PROP_IMP(NSTextStorage ,id<NSTextStorageDelegate>  ,delegate)

@end