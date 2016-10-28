//
//  CAShapeLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAShapeLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAShapeLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAShapeLayer, CAShapeLayer *);
TF_EC_MINSTANCE_IMP(CAShapeLayer, CAShapeLayer *);


TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGPathRef,path)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGColorRef,fillColor)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,fillRule)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGColorRef,strokeColor)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,strokeStart)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,strokeEnd)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,lineWidth)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,miterLimit)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,lineCap)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,lineJoin)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,lineDashPhase)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSArray *,lineDashPattern)

@end