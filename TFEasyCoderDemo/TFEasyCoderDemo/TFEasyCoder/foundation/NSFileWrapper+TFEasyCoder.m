//
//  NSFileWrapper+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFileWrapper+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFileWrapper (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFileWrapper, NSFileWrapper *);
TF_EC_MINSTANCE_IMP(NSFileWrapper, NSFileWrapper *);


TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSString *,preferredFilename)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSString *,filename)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSDictionary *,fileAttributes)

@end