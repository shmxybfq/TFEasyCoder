//
//  CATiledLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CATiledLayer,CATiledLayer *);

@interface CATiledLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CATiledLayer, CATiledLayer *);
TF_EC_MINSTANCE_INT(CATiledLayer,CATiledLayer *);



TF_EC_CHAIN_PROP_INT(CATiledLayer ,unsigned long long,levelsOfDetail);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,unsigned long long,levelsOfDetailBias);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGSize,tileSize);




//superclass pros CALayer
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,zPosition);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGPoint,anchorPoint);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,anchorPointZ);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CATransform3D,transform);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,doubleSided);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,geometryFlipped);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSArray *,sublayers);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CATransform3D,sublayerTransform);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CALayer *,mask);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,masksToBounds);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSString *,contentsGravity);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,contentsScale);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSString *,minificationFilter);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSString *,magnificationFilter);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,float,minificationFilterBias);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,opaque);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,needsDisplayOnBoundsChange);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,drawsAsynchronously);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,unsigned int,edgeAntialiasingMask);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,allowsEdgeAntialiasing);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGColorRef,backgroundColor);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,cornerRadius);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,borderWidth);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGColorRef,borderColor);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,float,opacity);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,allowsGroupOpacity);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSArray *,filters);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSArray *,backgroundFilters);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,shouldRasterize);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,rasterizationScale);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGColorRef,shadowColor);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,float,shadowOpacity);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,shadowRadius);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGPathRef,shadowPath);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSDictionary *,actions);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSDictionary *,style);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,duration);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,float,speed);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CATiledLayer ,long long,accessibilityNavigationStyle)





@end