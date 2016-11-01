//
//  CAGradientLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAGradientLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAGradientLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAGradientLayer, CAGradientLayer *);
TF_EC_MINSTANCE_IMP(CAGradientLayer, CAGradientLayer *);


TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSArray *,colors)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSArray *,locations)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGPoint,startPoint)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGPoint,endPoint)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,type)




//superclass pros CALayer
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAGradientLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CAGradientLayer);


@end