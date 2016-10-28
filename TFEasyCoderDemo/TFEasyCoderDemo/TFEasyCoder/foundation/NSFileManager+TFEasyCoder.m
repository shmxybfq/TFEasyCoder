//
//  NSFileManager+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFileManager+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFileManager (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFileManager, NSFileManager *);
TF_EC_MINSTANCE_IMP(NSFileManager, NSFileManager *);


TF_EC_CHAIN_PROP_IMP(NSFileManager ,id<NSFileManagerDelegate>  ,delegate)

@end