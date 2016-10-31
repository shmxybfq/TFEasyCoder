//
//  CATiledLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CATiledLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CATiledLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CATiledLayer, CATiledLayer *);
TF_EC_MINSTANCE_IMP(CATiledLayer, CATiledLayer *);



TF_EC_CHAIN_PROP_IMP(CATiledLayer ,unsigned long long,levelsOfDetail)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,unsigned long long,levelsOfDetailBias)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGSize,tileSize)




//superclass pros CALayer
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CATiledLayer ,long long,accessibilityNavigationStyle)





@end