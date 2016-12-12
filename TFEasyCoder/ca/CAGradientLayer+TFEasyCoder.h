//
//  CAGradientLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAGradientLayer (TFEasyCoder)





-(CAGradientLayer  *(^)(NSArray *  colors))set_colors;
-(CAGradientLayer  *(^)(NSArray *  locations))set_locations;
-(CAGradientLayer  *(^)(CGPoint  startPoint))set_startPoint;
-(CAGradientLayer  *(^)(CGPoint  endPoint))set_endPoint;
-(CAGradientLayer  *(^)(NSString *  type))set_type;




//superclass pros CALayer
-(CAGradientLayer  *(^)(CGPoint  position))set_position;
-(CAGradientLayer  *(^)(double  zPosition))set_zPosition;
-(CAGradientLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CAGradientLayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CAGradientLayer  *(^)(CATransform3D  transform))set_transform;
-(CAGradientLayer  *(^)(BOOL  hidden))set_hidden;
-(CAGradientLayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CAGradientLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CAGradientLayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CAGradientLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CAGradientLayer  *(^)(CALayer *  mask))set_mask;
-(CAGradientLayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CAGradientLayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CAGradientLayer  *(^)(double  contentsScale))set_contentsScale;
-(CAGradientLayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CAGradientLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CAGradientLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CAGradientLayer  *(^)(BOOL  opaque))set_opaque;
-(CAGradientLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CAGradientLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CAGradientLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CAGradientLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CAGradientLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CAGradientLayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CAGradientLayer  *(^)(double  borderWidth))set_borderWidth;
-(CAGradientLayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CAGradientLayer  *(^)(float  opacity))set_opacity;
-(CAGradientLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CAGradientLayer  *(^)(NSArray *  filters))set_filters;
-(CAGradientLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CAGradientLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CAGradientLayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CAGradientLayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CAGradientLayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CAGradientLayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CAGradientLayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CAGradientLayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CAGradientLayer  *(^)(NSDictionary *  actions))set_actions;
-(CAGradientLayer  *(^)(NSString *  name))set_name;
-(CAGradientLayer  *(^)(NSDictionary *  style))set_style;
-(CAGradientLayer  *(^)(double  beginTime))set_beginTime;
-(CAGradientLayer  *(^)(double  duration))set_duration;
-(CAGradientLayer  *(^)(float  speed))set_speed;
-(CAGradientLayer  *(^)(double  timeOffset))set_timeOffset;
-(CAGradientLayer  *(^)(float  repeatCount))set_repeatCount;
-(CAGradientLayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CAGradientLayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAGradientLayer  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CAGradientLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAGradientLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAGradientLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAGradientLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAGradientLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAGradientLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAGradientLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAGradientLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAGradientLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAGradientLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAGradientLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAGradientLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAGradientLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAGradientLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end