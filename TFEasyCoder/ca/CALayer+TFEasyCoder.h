//
//  CALayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CALayer,CALayer *);

@interface CALayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CALayer, CALayer *);
TF_EC_MINSTANCE_INT(CALayer,CALayer *);






TF_EC_CHAIN_PROP_INT(CALayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CALayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CALayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CALayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CALayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CALayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CALayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CALayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CALayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CALayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CALayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CALayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CALayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CALayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CALayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CALayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CALayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CALayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CALayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CALayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CALayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CALayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CALayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CALayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CALayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CALayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CALayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CALayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CALayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CALayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CALayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CALayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CALayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CALayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CALayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CALayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CALayer ,NSString *,fillMode);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CALayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CALayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CALayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CALayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CALayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CALayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CALayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CALayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CALayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CALayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CALayer ,long long,accessibilityNavigationStyle)





@end