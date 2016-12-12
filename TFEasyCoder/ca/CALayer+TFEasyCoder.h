//
//  CALayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CALayer (TFEasyCoder)









-(CALayer  *(^)(CGPoint  position))set_position;
-(CALayer  *(^)(double  zPosition))set_zPosition;
-(CALayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CALayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CALayer  *(^)(CATransform3D  transform))set_transform;
-(CALayer  *(^)(BOOL  hidden))set_hidden;
-(CALayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CALayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CALayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CALayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CALayer  *(^)(CALayer *  mask))set_mask;
-(CALayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CALayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CALayer  *(^)(double  contentsScale))set_contentsScale;
-(CALayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CALayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CALayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CALayer  *(^)(BOOL  opaque))set_opaque;
-(CALayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CALayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CALayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CALayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CALayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CALayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CALayer  *(^)(double  borderWidth))set_borderWidth;
-(CALayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CALayer  *(^)(float  opacity))set_opacity;
-(CALayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CALayer  *(^)(NSArray *  filters))set_filters;
-(CALayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CALayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CALayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CALayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CALayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CALayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CALayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CALayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CALayer  *(^)(NSDictionary *  actions))set_actions;
-(CALayer  *(^)(NSString *  name))set_name;
-(CALayer  *(^)(NSDictionary *  style))set_style;
-(CALayer  *(^)(double  beginTime))set_beginTime;
-(CALayer  *(^)(double  duration))set_duration;
-(CALayer  *(^)(float  speed))set_speed;
-(CALayer  *(^)(double  timeOffset))set_timeOffset;
-(CALayer  *(^)(float  repeatCount))set_repeatCount;
-(CALayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CALayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CALayer  *(^)(NSString *  fillMode))set_fillMode;




//superclass pros NSObject
-(CALayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CALayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CALayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CALayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CALayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CALayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CALayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CALayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CALayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CALayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CALayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CALayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CALayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CALayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end