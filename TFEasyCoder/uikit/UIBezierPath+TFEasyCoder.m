//
//  UIBezierPath+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIBezierPath+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIBezierPath (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIBezierPath, UIBezierPath *);
TF_EC_MINSTANCE_IMP(UIBezierPath, UIBezierPath *);


TF_EC_CHAIN_PROP_IMP(UIBezierPath ,CGPathRef,CGPath)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,double,lineWidth)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,int,lineCapStyle)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,int,lineJoinStyle)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,double,miterLimit)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,double,flatness)

@end