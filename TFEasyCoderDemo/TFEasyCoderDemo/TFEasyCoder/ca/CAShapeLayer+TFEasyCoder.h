//
//  CAShapeLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAShapeLayer,CAShapeLayer *);

@interface CAShapeLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CAShapeLayer, CAShapeLayer *);
TF_EC_MINSTANCE_INT(CAShapeLayer,CAShapeLayer *);


TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGPathRef,path);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGColorRef,fillColor);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,fillRule);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGColorRef,strokeColor);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,strokeStart);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,strokeEnd);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,lineWidth);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,miterLimit);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,lineCap);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,lineJoin);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,lineDashPhase);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSArray *,lineDashPattern);

@end