//
//  NSByteCountFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSByteCountFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSByteCountFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSByteCountFormatter, NSByteCountFormatter *);
TF_EC_MINSTANCE_IMP(NSByteCountFormatter, NSByteCountFormatter *);


TF_EC_CHAIN_PROP_IMP(NSByteCountFormatter ,unsigned long long,allowedUnits)
TF_EC_CHAIN_PROP_IMP(NSByteCountFormatter ,long long,countStyle)
TF_EC_CHAIN_PROP_IMP(NSByteCountFormatter ,BOOL,allowsNonnumericFormatting)
TF_EC_CHAIN_PROP_IMP(NSByteCountFormatter ,BOOL,includesUnit)
TF_EC_CHAIN_PROP_IMP(NSByteCountFormatter ,BOOL,includesCount)
TF_EC_CHAIN_PROP_IMP(NSByteCountFormatter ,BOOL,includesActualByteCount)
TF_EC_CHAIN_PROP_IMP(NSByteCountFormatter ,BOOL,adaptive)
TF_EC_CHAIN_PROP_IMP(NSByteCountFormatter ,BOOL,zeroPadsFractionDigits)
TF_EC_CHAIN_PROP_IMP(NSByteCountFormatter ,long long,formattingContext)

@end