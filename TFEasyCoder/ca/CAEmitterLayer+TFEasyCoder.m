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




//superclass pros CALayer
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAEmitterLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CAEmitterLayer);


@end