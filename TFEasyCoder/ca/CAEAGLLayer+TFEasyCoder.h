//
//  CAEAGLLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAEAGLLayer (TFEasyCoder)






-(CAEAGLLayer  *(^)(BOOL  presentsWithTransaction))set_presentsWithTransaction;
-(CAEAGLLayer  *(^)(NSDictionary *  drawableProperties))set_drawableProperties;




//superclass pros CALayer
-(CAEAGLLayer  *(^)(CGPoint  position))set_position;
-(CAEAGLLayer  *(^)(double  zPosition))set_zPosition;
-(CAEAGLLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CAEAGLLayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CAEAGLLayer  *(^)(CATransform3D  transform))set_transform;
-(CAEAGLLayer  *(^)(BOOL  hidden))set_hidden;
-(CAEAGLLayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CAEAGLLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CAEAGLLayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CAEAGLLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CAEAGLLayer  *(^)(CALayer *  mask))set_mask;
-(CAEAGLLayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CAEAGLLayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CAEAGLLayer  *(^)(double  contentsScale))set_contentsScale;
-(CAEAGLLayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CAEAGLLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CAEAGLLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CAEAGLLayer  *(^)(BOOL  opaque))set_opaque;
-(CAEAGLLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CAEAGLLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CAEAGLLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CAEAGLLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CAEAGLLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CAEAGLLayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CAEAGLLayer  *(^)(double  borderWidth))set_borderWidth;
-(CAEAGLLayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CAEAGLLayer  *(^)(float  opacity))set_opacity;
-(CAEAGLLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CAEAGLLayer  *(^)(NSArray *  filters))set_filters;
-(CAEAGLLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CAEAGLLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CAEAGLLayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CAEAGLLayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CAEAGLLayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CAEAGLLayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CAEAGLLayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CAEAGLLayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CAEAGLLayer  *(^)(NSDictionary *  actions))set_actions;
-(CAEAGLLayer  *(^)(NSString *  name))set_name;
-(CAEAGLLayer  *(^)(NSDictionary *  style))set_style;
-(CAEAGLLayer  *(^)(double  beginTime))set_beginTime;
-(CAEAGLLayer  *(^)(double  duration))set_duration;
-(CAEAGLLayer  *(^)(float  speed))set_speed;
-(CAEAGLLayer  *(^)(double  timeOffset))set_timeOffset;
-(CAEAGLLayer  *(^)(float  repeatCount))set_repeatCount;
-(CAEAGLLayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CAEAGLLayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAEAGLLayer  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CAEAGLLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAEAGLLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAEAGLLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAEAGLLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAEAGLLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAEAGLLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAEAGLLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAEAGLLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAEAGLLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAEAGLLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAEAGLLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAEAGLLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAEAGLLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAEAGLLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end