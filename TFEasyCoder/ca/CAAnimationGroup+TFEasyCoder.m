//
//  CAAnimationGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAAnimationGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAAnimationGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAAnimationGroup, CAAnimationGroup *);
TF_EC_MINSTANCE_IMP(CAAnimationGroup, CAAnimationGroup *);


TF_EC_CHAIN_PROP_IMP(CAAnimationGroup ,NSArray *,animations)

@end