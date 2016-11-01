//
//  CATextLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CATextLayer,CATextLayer *);

@interface CATextLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CATextLayer, CATextLayer *);
TF_EC_MINSTANCE_INT(CATextLayer,CATextLayer *);


TF_EC_CHAIN_PROP_INT(CATextLayer ,CFTypeRef,font);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,fontSize);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGColorRef,foregroundColor);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,wrapped);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,truncationMode);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,alignmentMode);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,allowsFontSubpixelQuantization);




//superclass pros CALayer
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CATextLayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CATextLayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CATextLayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CATextLayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CATextLayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CATextLayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CATextLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CATextLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CATextLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CATextLayer);


@end