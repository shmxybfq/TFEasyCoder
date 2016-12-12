//
//  CAShapeLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAShapeLayer (TFEasyCoder)





-(CAShapeLayer  *(^)(CGPathRef  path))set_path;
-(CAShapeLayer  *(^)(CGColorRef  fillColor))set_fillColor;
-(CAShapeLayer  *(^)(NSString *  fillRule))set_fillRule;
-(CAShapeLayer  *(^)(CGColorRef  strokeColor))set_strokeColor;
-(CAShapeLayer  *(^)(double  strokeStart))set_strokeStart;
-(CAShapeLayer  *(^)(double  strokeEnd))set_strokeEnd;
-(CAShapeLayer  *(^)(double  lineWidth))set_lineWidth;
-(CAShapeLayer  *(^)(double  miterLimit))set_miterLimit;
-(CAShapeLayer  *(^)(NSString *  lineCap))set_lineCap;
-(CAShapeLayer  *(^)(NSString *  lineJoin))set_lineJoin;
-(CAShapeLayer  *(^)(double  lineDashPhase))set_lineDashPhase;
-(CAShapeLayer  *(^)(NSArray *  lineDashPattern))set_lineDashPattern;




//superclass pros CALayer
-(CAShapeLayer  *(^)(CGPoint  position))set_position;
-(CAShapeLayer  *(^)(double  zPosition))set_zPosition;
-(CAShapeLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CAShapeLayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CAShapeLayer  *(^)(CATransform3D  transform))set_transform;
-(CAShapeLayer  *(^)(BOOL  hidden))set_hidden;
-(CAShapeLayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CAShapeLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CAShapeLayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CAShapeLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CAShapeLayer  *(^)(CALayer *  mask))set_mask;
-(CAShapeLayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CAShapeLayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CAShapeLayer  *(^)(double  contentsScale))set_contentsScale;
-(CAShapeLayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CAShapeLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CAShapeLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CAShapeLayer  *(^)(BOOL  opaque))set_opaque;
-(CAShapeLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CAShapeLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CAShapeLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CAShapeLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CAShapeLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CAShapeLayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CAShapeLayer  *(^)(double  borderWidth))set_borderWidth;
-(CAShapeLayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CAShapeLayer  *(^)(float  opacity))set_opacity;
-(CAShapeLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CAShapeLayer  *(^)(NSArray *  filters))set_filters;
-(CAShapeLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CAShapeLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CAShapeLayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CAShapeLayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CAShapeLayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CAShapeLayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CAShapeLayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CAShapeLayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CAShapeLayer  *(^)(NSDictionary *  actions))set_actions;
-(CAShapeLayer  *(^)(NSString *  name))set_name;
-(CAShapeLayer  *(^)(NSDictionary *  style))set_style;
-(CAShapeLayer  *(^)(double  beginTime))set_beginTime;
-(CAShapeLayer  *(^)(double  duration))set_duration;
-(CAShapeLayer  *(^)(float  speed))set_speed;
-(CAShapeLayer  *(^)(double  timeOffset))set_timeOffset;
-(CAShapeLayer  *(^)(float  repeatCount))set_repeatCount;
-(CAShapeLayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CAShapeLayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAShapeLayer  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CAShapeLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAShapeLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAShapeLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAShapeLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAShapeLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAShapeLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAShapeLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAShapeLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAShapeLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAShapeLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAShapeLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAShapeLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAShapeLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAShapeLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end