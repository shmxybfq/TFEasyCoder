//
//  NSMassFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMassFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMassFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMassFormatter, NSMassFormatter *);
TF_EC_MINSTANCE_IMP(NSMassFormatter, NSMassFormatter *);


TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,NSNumberFormatter *,numberFormatter)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,long long,unitStyle)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,BOOL,forPersonMassUse)

@end