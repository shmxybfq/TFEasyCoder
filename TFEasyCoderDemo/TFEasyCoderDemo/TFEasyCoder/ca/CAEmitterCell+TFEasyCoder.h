//
//  CAEmitterCell+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAEmitterCell,CAEmitterCell *);

@interface CAEmitterCell (TFEasyCoder)

TF_EC_MSTATIC_INT(CAEmitterCell, CAEmitterCell *);
TF_EC_MINSTANCE_INT(CAEmitterCell,CAEmitterCell *);



TF_EC_CHAIN_PROP_INT(CAEmitterCell ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,birthRate);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,lifetime);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,lifetimeRange);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,emissionLatitude);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,emissionLongitude);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,emissionRange);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,velocity);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,velocityRange);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,xAcceleration);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,yAcceleration);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,zAcceleration);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,scale);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,scaleRange);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,scaleSpeed);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,spin);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,spinRange);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,CGColorRef,color);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,redRange);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,greenRange);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,blueRange);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,alphaRange);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,redSpeed);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,greenSpeed);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,blueSpeed);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,alphaSpeed);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,NSArray *,emitterCells);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,duration);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,speed);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAEmitterCell ,NSString *,fillMode);

@end