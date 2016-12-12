//
//  CAScrollLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAScrollLayer (TFEasyCoder)





-(CAScrollLayer  *(^)(NSString *  scrollMode))set_scrollMode;




//superclass pros CALayer
-(CAScrollLayer  *(^)(CGPoint  position))set_position;
-(CAScrollLayer  *(^)(double  zPosition))set_zPosition;
-(CAScrollLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CAScrollLayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CAScrollLayer  *(^)(CATransform3D  transform))set_transform;
-(CAScrollLayer  *(^)(BOOL  hidden))set_hidden;
-(CAScrollLayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CAScrollLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CAScrollLayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CAScrollLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CAScrollLayer  *(^)(CALayer *  mask))set_mask;
-(CAScrollLayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CAScrollLayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CAScrollLayer  *(^)(double  contentsScale))set_contentsScale;
-(CAScrollLayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CAScrollLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CAScrollLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CAScrollLayer  *(^)(BOOL  opaque))set_opaque;
-(CAScrollLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CAScrollLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CAScrollLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CAScrollLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CAScrollLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CAScrollLayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CAScrollLayer  *(^)(double  borderWidth))set_borderWidth;
-(CAScrollLayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CAScrollLayer  *(^)(float  opacity))set_opacity;
-(CAScrollLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CAScrollLayer  *(^)(NSArray *  filters))set_filters;
-(CAScrollLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CAScrollLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CAScrollLayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CAScrollLayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CAScrollLayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CAScrollLayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CAScrollLayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CAScrollLayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CAScrollLayer  *(^)(NSDictionary *  actions))set_actions;
-(CAScrollLayer  *(^)(NSString *  name))set_name;
-(CAScrollLayer  *(^)(NSDictionary *  style))set_style;
-(CAScrollLayer  *(^)(double  beginTime))set_beginTime;
-(CAScrollLayer  *(^)(double  duration))set_duration;
-(CAScrollLayer  *(^)(float  speed))set_speed;
-(CAScrollLayer  *(^)(double  timeOffset))set_timeOffset;
-(CAScrollLayer  *(^)(float  repeatCount))set_repeatCount;
-(CAScrollLayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CAScrollLayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAScrollLayer  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CAScrollLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAScrollLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAScrollLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAScrollLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAScrollLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAScrollLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAScrollLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAScrollLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAScrollLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAScrollLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAScrollLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAScrollLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAScrollLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAScrollLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end