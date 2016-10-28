//
//  CAEAGLLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAEAGLLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAEAGLLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAEAGLLayer, CAEAGLLayer *);
TF_EC_MINSTANCE_IMP(CAEAGLLayer, CAEAGLLayer *);



TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,presentsWithTransaction)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSDictionary *,drawableProperties)

@end