//
//  CASpringAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CASpringAnimation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CASpringAnimation (TFEasyCoder)

TF_EC_MSTATIC_IMP(CASpringAnimation, CASpringAnimation *);
TF_EC_MINSTANCE_IMP(CASpringAnimation, CASpringAnimation *);


TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,mass)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,stiffness)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,damping)
TF_EC_CHAIN_PROP_IMP(CASpringAnimation ,double,initialVelocity)

@end