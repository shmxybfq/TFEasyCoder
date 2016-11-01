//
//  CAScrollLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAScrollLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAScrollLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAScrollLayer, CAScrollLayer *);
TF_EC_MINSTANCE_IMP(CAScrollLayer, CAScrollLayer *);


TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,scrollMode)




//superclass pros CALayer
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAScrollLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CAScrollLayer);


@end