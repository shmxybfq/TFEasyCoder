//
//  CAEAGLLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAEAGLLayer,CAEAGLLayer *);

@interface CAEAGLLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CAEAGLLayer, CAEAGLLayer *);
TF_EC_MINSTANCE_INT(CAEAGLLayer,CAEAGLLayer *);



TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,presentsWithTransaction);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSDictionary *,drawableProperties);




//superclass pros CALayer
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAEAGLLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CAEAGLLayer);


@end