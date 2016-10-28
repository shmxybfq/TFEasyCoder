//
//  CAEmitterLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAEmitterLayer,CAEmitterLayer *);

@interface CAEmitterLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CAEmitterLayer, CAEmitterLayer *);
TF_EC_MINSTANCE_INT(CAEmitterLayer,CAEmitterLayer *);



TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSArray *,emitterCells);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,birthRate);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,lifetime);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGPoint,emitterPosition);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,emitterZPosition);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGSize,emitterSize);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,emitterDepth);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,emitterShape);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,emitterMode);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,renderMode);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,preservesDepth);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,velocity);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,scale);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,spin);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,unsigned int,seed);

@end