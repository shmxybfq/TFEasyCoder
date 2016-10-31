//
//  CATransformLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CATransformLayer,CATransformLayer *);

@interface CATransformLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CATransformLayer, CATransformLayer *);
TF_EC_MINSTANCE_INT(CATransformLayer,CATransformLayer *);






//superclass pros CALayer
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CATransformLayer ,long long,accessibilityNavigationStyle)





@end