//
//  CALayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CALayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CALayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CALayer, CALayer *);
TF_EC_MINSTANCE_IMP(CALayer, CALayer *);






TF_EC_CHAIN_PROP_IMP(CALayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CALayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CALayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CALayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CALayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CALayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CALayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CALayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CALayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CALayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CALayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CALayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CALayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CALayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CALayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CALayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CALayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSString *,fillMode)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CALayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CALayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CALayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CALayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CALayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CALayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CALayer ,long long,accessibilityNavigationStyle)





@end