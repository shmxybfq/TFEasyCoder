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




//superclass pros CALayer
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAEAGLLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CAEAGLLayer);


@end