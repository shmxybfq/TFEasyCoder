//
//  CAShapeLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAShapeLayer,CAShapeLayer *);

@interface CAShapeLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CAShapeLayer, CAShapeLayer *);
TF_EC_MINSTANCE_INT(CAShapeLayer,CAShapeLayer *);


TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGPathRef,path);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGColorRef,fillColor);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,fillRule);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGColorRef,strokeColor);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,strokeStart);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,strokeEnd);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,lineWidth);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,miterLimit);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,lineCap);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,lineJoin);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,lineDashPhase);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSArray *,lineDashPattern);




//superclass pros CALayer
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAShapeLayer ,long long,accessibilityNavigationStyle)





@end