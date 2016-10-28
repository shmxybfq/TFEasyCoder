//
//  NSScanner+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSScanner+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSScanner (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSScanner, NSScanner *);
TF_EC_MINSTANCE_IMP(NSScanner, NSScanner *);


TF_EC_CHAIN_PROP_IMP(NSScanner ,unsigned long long,scanLocation)
TF_EC_CHAIN_PROP_IMP(NSScanner ,NSCharacterSet *,charactersToBeSkipped)
TF_EC_CHAIN_PROP_IMP(NSScanner ,BOOL,caseSensitive)

@end