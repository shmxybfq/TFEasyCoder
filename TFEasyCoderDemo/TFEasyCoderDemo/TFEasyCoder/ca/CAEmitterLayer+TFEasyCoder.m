//
//  CAEmitterLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAEmitterLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAEmitterLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAEmitterLayer, CAEmitterLayer *);
TF_EC_MINSTANCE_IMP(CAEmitterLayer, CAEmitterLayer *);



TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSArray *,emitterCells)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,birthRate)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,lifetime)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGPoint,emitterPosition)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,emitterZPosition)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGSize,emitterSize)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,emitterDepth)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,emitterShape)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,emitterMode)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,renderMode)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,preservesDepth)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,velocity)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,scale)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,spin)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,unsigned int,seed)

@end