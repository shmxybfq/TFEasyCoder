//
//  CATransformLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CATransformLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CATransformLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CATransformLayer, CATransformLayer *);
TF_EC_MINSTANCE_IMP(CATransformLayer, CATransformLayer *);






//superclass pros CALayer
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CATransformLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CATransformLayer);


@end