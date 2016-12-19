//
//  CATransformLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CATransformLayer (TFEasyCoder)









//superclass pros CALayer
-(CATransformLayer  *(^)(CGPoint  position))set_position;
-(CATransformLayer  *(^)(double  zPosition))set_zPosition;
-(CATransformLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CATransformLayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CATransformLayer  *(^)(CATransform3D  transform))set_transform;
-(CATransformLayer  *(^)(BOOL  hidden))set_hidden;
-(CATransformLayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CATransformLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CATransformLayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CATransformLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CATransformLayer  *(^)(CALayer *  mask))set_mask;
-(CATransformLayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CATransformLayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CATransformLayer  *(^)(double  contentsScale))set_contentsScale;
-(CATransformLayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CATransformLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CATransformLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CATransformLayer  *(^)(BOOL  opaque))set_opaque;
-(CATransformLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CATransformLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CATransformLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CATransformLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CATransformLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CATransformLayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CATransformLayer  *(^)(double  borderWidth))set_borderWidth;
-(CATransformLayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CATransformLayer  *(^)(float  opacity))set_opacity;
-(CATransformLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CATransformLayer  *(^)(NSArray *  filters))set_filters;
-(CATransformLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CATransformLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CATransformLayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CATransformLayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CATransformLayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CATransformLayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CATransformLayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CATransformLayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CATransformLayer  *(^)(NSDictionary *  actions))set_actions;
-(CATransformLayer  *(^)(NSString *  name))set_name;
-(CATransformLayer  *(^)(NSDictionary *  style))set_style;
-(CATransformLayer  *(^)(double  beginTime))set_beginTime;
-(CATransformLayer  *(^)(double  duration))set_duration;
-(CATransformLayer  *(^)(float  speed))set_speed;
-(CATransformLayer  *(^)(double  timeOffset))set_timeOffset;
-(CATransformLayer  *(^)(float  repeatCount))set_repeatCount;
-(CATransformLayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CATransformLayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CATransformLayer  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CATransformLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CATransformLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CATransformLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CATransformLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CATransformLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CATransformLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CATransformLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CATransformLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CATransformLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CATransformLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CATransformLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CATransformLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CATransformLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CATransformLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end