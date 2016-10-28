//
//  NSEnergyFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSEnergyFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSEnergyFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSEnergyFormatter, NSEnergyFormatter *);
TF_EC_MINSTANCE_IMP(NSEnergyFormatter, NSEnergyFormatter *);


TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,NSNumberFormatter *,numberFormatter)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,long long,unitStyle)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,BOOL,forFoodEnergyUse)

@end