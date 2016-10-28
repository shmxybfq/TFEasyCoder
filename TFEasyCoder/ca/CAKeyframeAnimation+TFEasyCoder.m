//
//  CAKeyframeAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAKeyframeAnimation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAKeyframeAnimation (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAKeyframeAnimation, CAKeyframeAnimation *);
TF_EC_MINSTANCE_IMP(CAKeyframeAnimation, CAKeyframeAnimation *);


TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,values)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,CGPathRef,path)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,keyTimes)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,timingFunctions)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,calculationMode)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,tensionValues)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,continuityValues)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSArray *,biasValues)
TF_EC_CHAIN_PROP_IMP(CAKeyframeAnimation ,NSString *,rotationMode)

@end