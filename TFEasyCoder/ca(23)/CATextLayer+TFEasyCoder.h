//
//  CATextLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CATextLayer (TFEasyCoder)





-(CATextLayer  *(^)(CFTypeRef  font))set_font;
-(CATextLayer  *(^)(double  fontSize))set_fontSize;
-(CATextLayer  *(^)(CGColorRef  foregroundColor))set_foregroundColor;
-(CATextLayer  *(^)(BOOL  wrapped))set_wrapped;
-(CATextLayer  *(^)(NSString *  truncationMode))set_truncationMode;
-(CATextLayer  *(^)(NSString *  alignmentMode))set_alignmentMode;
-(CATextLayer  *(^)(BOOL  allowsFontSubpixelQuantization))set_allowsFontSubpixelQuantization;




//superclass pros CALayer
-(CATextLayer  *(^)(CGPoint  position))set_position;
-(CATextLayer  *(^)(double  zPosition))set_zPosition;
-(CATextLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CATextLayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CATextLayer  *(^)(CATransform3D  transform))set_transform;
-(CATextLayer  *(^)(BOOL  hidden))set_hidden;
-(CATextLayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CATextLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CATextLayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CATextLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CATextLayer  *(^)(CALayer *  mask))set_mask;
-(CATextLayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CATextLayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CATextLayer  *(^)(double  contentsScale))set_contentsScale;
-(CATextLayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CATextLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CATextLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CATextLayer  *(^)(BOOL  opaque))set_opaque;
-(CATextLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CATextLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CATextLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CATextLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CATextLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CATextLayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CATextLayer  *(^)(double  borderWidth))set_borderWidth;
-(CATextLayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CATextLayer  *(^)(float  opacity))set_opacity;
-(CATextLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CATextLayer  *(^)(NSArray *  filters))set_filters;
-(CATextLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CATextLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CATextLayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CATextLayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CATextLayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CATextLayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CATextLayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CATextLayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CATextLayer  *(^)(NSDictionary *  actions))set_actions;
-(CATextLayer  *(^)(NSString *  name))set_name;
-(CATextLayer  *(^)(NSDictionary *  style))set_style;
-(CATextLayer  *(^)(double  beginTime))set_beginTime;
-(CATextLayer  *(^)(double  duration))set_duration;
-(CATextLayer  *(^)(float  speed))set_speed;
-(CATextLayer  *(^)(double  timeOffset))set_timeOffset;
-(CATextLayer  *(^)(float  repeatCount))set_repeatCount;
-(CATextLayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CATextLayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CATextLayer  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CATextLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CATextLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CATextLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CATextLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CATextLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CATextLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CATextLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CATextLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CATextLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CATextLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CATextLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CATextLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CATextLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CATextLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end