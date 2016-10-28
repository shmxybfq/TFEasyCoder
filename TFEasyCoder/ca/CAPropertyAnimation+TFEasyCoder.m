//
//  CAPropertyAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAPropertyAnimation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAPropertyAnimation (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAPropertyAnimation, CAPropertyAnimation *);
TF_EC_MINSTANCE_IMP(CAPropertyAnimation, CAPropertyAnimation *);


TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,NSString *,keyPath)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,BOOL,additive)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,BOOL,cumulative)
TF_EC_CHAIN_PROP_IMP(CAPropertyAnimation ,CAValueFunction *,valueFunction)

@end