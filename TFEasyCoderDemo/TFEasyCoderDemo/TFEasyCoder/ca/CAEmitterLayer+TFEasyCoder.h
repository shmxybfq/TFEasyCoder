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




//superclass pros CALayer
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAEmitterLayer ,long long,accessibilityNavigationStyle)





@end