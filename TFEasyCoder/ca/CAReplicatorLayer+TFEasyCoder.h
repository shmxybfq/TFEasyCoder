//
//  CAReplicatorLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAReplicatorLayer,CAReplicatorLayer *);

@interface CAReplicatorLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CAReplicatorLayer, CAReplicatorLayer *);
TF_EC_MINSTANCE_INT(CAReplicatorLayer,CAReplicatorLayer *);


TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,long long,instanceCount);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,preservesDepth);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,instanceDelay);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CATransform3D,instanceTransform);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGColorRef,instanceColor);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,instanceRedOffset);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,instanceGreenOffset);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,instanceBlueOffset);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,instanceAlphaOffset);




//superclass pros CALayer
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CAReplicatorLayer);


@end