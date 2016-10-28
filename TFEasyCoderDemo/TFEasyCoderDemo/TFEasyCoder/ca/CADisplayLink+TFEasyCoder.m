//
//  CADisplayLink+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CADisplayLink+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CADisplayLink (TFEasyCoder)

TF_EC_MSTATIC_IMP(CADisplayLink, CADisplayLink *);
TF_EC_MINSTANCE_IMP(CADisplayLink, CADisplayLink *);


TF_EC_CHAIN_PROP_IMP(CADisplayLink ,BOOL,paused)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,long long,frameInterval)

@end