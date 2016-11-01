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




//superclass pros CALayer
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAShapeLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CAShapeLayer);


@end