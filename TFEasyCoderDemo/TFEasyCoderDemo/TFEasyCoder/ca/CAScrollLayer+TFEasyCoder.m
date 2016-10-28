//
//  CAScrollLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAScrollLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAScrollLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAScrollLayer, CAScrollLayer *);
TF_EC_MINSTANCE_IMP(CAScrollLayer, CAScrollLayer *);


TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,scrollMode)

@end