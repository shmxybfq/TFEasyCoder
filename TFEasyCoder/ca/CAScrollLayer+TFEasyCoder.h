//
//  CAScrollLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAScrollLayer,CAScrollLayer *);

@interface CAScrollLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CAScrollLayer, CAScrollLayer *);
TF_EC_MINSTANCE_INT(CAScrollLayer,CAScrollLayer *);


TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,scrollMode);




//superclass pros CALayer
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAScrollLayer ,long long,accessibilityNavigationStyle)





@end