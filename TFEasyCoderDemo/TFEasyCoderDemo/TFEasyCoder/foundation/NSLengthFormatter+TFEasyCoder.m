//
//  NSLengthFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLengthFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSLengthFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSLengthFormatter, NSLengthFormatter *);
TF_EC_MINSTANCE_IMP(NSLengthFormatter, NSLengthFormatter *);


TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,NSNumberFormatter *,numberFormatter)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,long long,unitStyle)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,BOOL,forPersonHeightUse)

@end