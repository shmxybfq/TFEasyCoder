//
//  CAGradientLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAGradientLayer,CAGradientLayer *);

@interface CAGradientLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CAGradientLayer, CAGradientLayer *);
TF_EC_MINSTANCE_INT(CAGradientLayer,CAGradientLayer *);


TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSArray *,colors);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSArray *,locations);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGPoint,startPoint);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGPoint,endPoint);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,type);




//superclass pros CALayer
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CAGradientLayer);


@end