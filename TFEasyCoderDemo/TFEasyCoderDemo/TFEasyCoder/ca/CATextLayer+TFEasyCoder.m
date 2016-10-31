//
//  CATextLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CATextLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CATextLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CATextLayer, CATextLayer *);
TF_EC_MINSTANCE_IMP(CATextLayer, CATextLayer *);


TF_EC_CHAIN_PROP_IMP(CATextLayer ,CFTypeRef,font)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,fontSize)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGColorRef,foregroundColor)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,wrapped)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,truncationMode)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,alignmentMode)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,allowsFontSubpixelQuantization)




//superclass pros CALayer
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,zPosition)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,anchorPointZ)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,hidden)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,doubleSided)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,geometryFlipped)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSArray *,sublayers)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CALayer *,mask)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,masksToBounds)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,contentsGravity)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,opaque)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,needsDisplayOnBoundsChange)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,drawsAsynchronously)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,unsigned int,edgeAntialiasingMask)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,allowsEdgeAntialiasing)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGColorRef,backgroundColor)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,cornerRadius)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,borderWidth)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGColorRef,borderColor)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,float,opacity)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,allowsGroupOpacity)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSArray *,filters)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSArray *,backgroundFilters)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,shouldRasterize)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,rasterizationScale)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGColorRef,shadowColor)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,float,shadowOpacity)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,shadowRadius)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGPathRef,shadowPath)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSDictionary *,actions)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,duration)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,float,speed)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,fillMode)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,long long,accessibilityNavigationStyle)





@end