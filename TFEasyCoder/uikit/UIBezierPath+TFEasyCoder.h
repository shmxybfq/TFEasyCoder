//
//  UIBezierPath+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIBezierPath,UIBezierPath *);

@interface UIBezierPath (TFEasyCoder)

TF_EC_MSTATIC_INT(UIBezierPath, UIBezierPath *);
TF_EC_MINSTANCE_INT(UIBezierPath,UIBezierPath *);

TF_EC_CHAIN_PROP_INT(UIBezierPath ,CGPathRef,CGPath);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,double,lineWidth);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,int,lineCapStyle);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,int,lineJoinStyle);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,double,miterLimit);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,double,flatness);

@end