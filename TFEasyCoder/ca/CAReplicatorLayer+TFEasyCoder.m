//
//  CAReplicatorLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAReplicatorLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAReplicatorLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAReplicatorLayer, CAReplicatorLayer *);
TF_EC_MINSTANCE_IMP(CAReplicatorLayer, CAReplicatorLayer *);


TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,long long,instanceCount)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,preservesDepth)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,instanceDelay)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CATransform3D,instanceTransform)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGColorRef,instanceColor);
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,instanceRedOffset)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,instanceGreenOffset)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,instanceBlueOffset)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,instanceAlphaOffset)




//superclass pros CALayer
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAReplicatorLayer ,long long,accessibilityNavigationStyle)





@end