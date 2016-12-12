//
//  CATiledLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CATiledLayer (TFEasyCoder)






-(CATiledLayer  *(^)(unsigned long long  levelsOfDetail))set_levelsOfDetail;
-(CATiledLayer  *(^)(unsigned long long  levelsOfDetailBias))set_levelsOfDetailBias;
-(CATiledLayer  *(^)(CGSize  tileSize))set_tileSize;




//superclass pros CALayer
-(CATiledLayer  *(^)(CGPoint  position))set_position;
-(CATiledLayer  *(^)(double  zPosition))set_zPosition;
-(CATiledLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CATiledLayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CATiledLayer  *(^)(CATransform3D  transform))set_transform;
-(CATiledLayer  *(^)(BOOL  hidden))set_hidden;
-(CATiledLayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CATiledLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CATiledLayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CATiledLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CATiledLayer  *(^)(CALayer *  mask))set_mask;
-(CATiledLayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CATiledLayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CATiledLayer  *(^)(double  contentsScale))set_contentsScale;
-(CATiledLayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CATiledLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CATiledLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CATiledLayer  *(^)(BOOL  opaque))set_opaque;
-(CATiledLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CATiledLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CATiledLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CATiledLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CATiledLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CATiledLayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CATiledLayer  *(^)(double  borderWidth))set_borderWidth;
-(CATiledLayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CATiledLayer  *(^)(float  opacity))set_opacity;
-(CATiledLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CATiledLayer  *(^)(NSArray *  filters))set_filters;
-(CATiledLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CATiledLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CATiledLayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CATiledLayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CATiledLayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CATiledLayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CATiledLayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CATiledLayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CATiledLayer  *(^)(NSDictionary *  actions))set_actions;
-(CATiledLayer  *(^)(NSString *  name))set_name;
-(CATiledLayer  *(^)(NSDictionary *  style))set_style;
-(CATiledLayer  *(^)(double  beginTime))set_beginTime;
-(CATiledLayer  *(^)(double  duration))set_duration;
-(CATiledLayer  *(^)(float  speed))set_speed;
-(CATiledLayer  *(^)(double  timeOffset))set_timeOffset;
-(CATiledLayer  *(^)(float  repeatCount))set_repeatCount;
-(CATiledLayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CATiledLayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CATiledLayer  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CATiledLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CATiledLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CATiledLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CATiledLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CATiledLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CATiledLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CATiledLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CATiledLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CATiledLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CATiledLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CATiledLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CATiledLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CATiledLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CATiledLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end