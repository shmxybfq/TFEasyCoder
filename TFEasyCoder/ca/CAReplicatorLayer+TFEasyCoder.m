//
//  CAReplicatorLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAReplicatorLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAReplicatorLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAReplicatorLayer, CAReplicatorLayer *);
TF_EC_MINSTANCE_IMP(CAReplicatorLayer, CAReplicatorLayer *);


TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,long long,instanceCount)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,preservesDepth)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,instanceDelay)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CATransform3D,instanceTransform)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGColorRef,instanceColor);
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,instanceRedOffset)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,instanceGreenOffset)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,instanceBlueOffset)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,instanceAlphaOffset)

@end