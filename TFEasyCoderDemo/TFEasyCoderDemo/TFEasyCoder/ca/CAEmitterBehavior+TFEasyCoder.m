//
//  CAEmitterBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAEmitterBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAEmitterBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAEmitterBehavior, CAEmitterBehavior *);
TF_EC_MINSTANCE_IMP(CAEmitterBehavior, CAEmitterBehavior *);


TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,BOOL,enabled)

@end