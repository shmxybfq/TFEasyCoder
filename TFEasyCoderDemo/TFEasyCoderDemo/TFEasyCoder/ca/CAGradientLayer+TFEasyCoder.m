//
//  CAGradientLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAGradientLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAGradientLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAGradientLayer, CAGradientLayer *);
TF_EC_MINSTANCE_IMP(CAGradientLayer, CAGradientLayer *);


TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSArray *,colors)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSArray *,locations)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGPoint,startPoint)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGPoint,endPoint)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,type)

@end