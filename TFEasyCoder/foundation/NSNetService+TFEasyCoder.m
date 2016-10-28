//
//  NSNetService+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNetService+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNetService (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNetService, NSNetService *);
TF_EC_MINSTANCE_IMP(NSNetService, NSNetService *);


TF_EC_CHAIN_PROP_IMP(NSNetService ,id<NSNetServiceDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSNetService ,BOOL,includesPeerToPeer)

@end