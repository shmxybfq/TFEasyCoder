//
//  CAReplicatorLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAReplicatorLayer (TFEasyCoder)





-(CAReplicatorLayer  *(^)(long long  instanceCount))set_instanceCount;
-(CAReplicatorLayer  *(^)(BOOL  preservesDepth))set_preservesDepth;
-(CAReplicatorLayer  *(^)(double  instanceDelay))set_instanceDelay;
-(CAReplicatorLayer  *(^)(CATransform3D  instanceTransform))set_instanceTransform;
-(CAReplicatorLayer  *(^)(CGColorRef  instanceColor))set_instanceColor;
-(CAReplicatorLayer  *(^)(float  instanceRedOffset))set_instanceRedOffset;
-(CAReplicatorLayer  *(^)(float  instanceGreenOffset))set_instanceGreenOffset;
-(CAReplicatorLayer  *(^)(float  instanceBlueOffset))set_instanceBlueOffset;
-(CAReplicatorLayer  *(^)(float  instanceAlphaOffset))set_instanceAlphaOffset;




//superclass pros CALayer
-(CAReplicatorLayer  *(^)(CGPoint  position))set_position;
-(CAReplicatorLayer  *(^)(double  zPosition))set_zPosition;
-(CAReplicatorLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CAReplicatorLayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CAReplicatorLayer  *(^)(CATransform3D  transform))set_transform;
-(CAReplicatorLayer  *(^)(BOOL  hidden))set_hidden;
-(CAReplicatorLayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CAReplicatorLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CAReplicatorLayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CAReplicatorLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CAReplicatorLayer  *(^)(CALayer *  mask))set_mask;
-(CAReplicatorLayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CAReplicatorLayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CAReplicatorLayer  *(^)(double  contentsScale))set_contentsScale;
-(CAReplicatorLayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CAReplicatorLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CAReplicatorLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CAReplicatorLayer  *(^)(BOOL  opaque))set_opaque;
-(CAReplicatorLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CAReplicatorLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CAReplicatorLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CAReplicatorLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CAReplicatorLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CAReplicatorLayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CAReplicatorLayer  *(^)(double  borderWidth))set_borderWidth;
-(CAReplicatorLayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CAReplicatorLayer  *(^)(float  opacity))set_opacity;
-(CAReplicatorLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CAReplicatorLayer  *(^)(NSArray *  filters))set_filters;
-(CAReplicatorLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CAReplicatorLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CAReplicatorLayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CAReplicatorLayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CAReplicatorLayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CAReplicatorLayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CAReplicatorLayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CAReplicatorLayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CAReplicatorLayer  *(^)(NSDictionary *  actions))set_actions;
-(CAReplicatorLayer  *(^)(NSString *  name))set_name;
-(CAReplicatorLayer  *(^)(NSDictionary *  style))set_style;
-(CAReplicatorLayer  *(^)(double  beginTime))set_beginTime;
-(CAReplicatorLayer  *(^)(double  duration))set_duration;
-(CAReplicatorLayer  *(^)(float  speed))set_speed;
-(CAReplicatorLayer  *(^)(double  timeOffset))set_timeOffset;
-(CAReplicatorLayer  *(^)(float  repeatCount))set_repeatCount;
-(CAReplicatorLayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CAReplicatorLayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAReplicatorLayer  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CAReplicatorLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAReplicatorLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAReplicatorLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAReplicatorLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAReplicatorLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAReplicatorLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAReplicatorLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAReplicatorLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAReplicatorLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAReplicatorLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAReplicatorLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAReplicatorLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAReplicatorLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAReplicatorLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end