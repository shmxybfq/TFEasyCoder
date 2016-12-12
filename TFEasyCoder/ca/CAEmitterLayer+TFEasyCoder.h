//
//  CAEmitterLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAEmitterLayer (TFEasyCoder)






-(CAEmitterLayer  *(^)(NSArray *  emitterCells))set_emitterCells;
-(CAEmitterLayer  *(^)(float  birthRate))set_birthRate;
-(CAEmitterLayer  *(^)(float  lifetime))set_lifetime;
-(CAEmitterLayer  *(^)(CGPoint  emitterPosition))set_emitterPosition;
-(CAEmitterLayer  *(^)(double  emitterZPosition))set_emitterZPosition;
-(CAEmitterLayer  *(^)(CGSize  emitterSize))set_emitterSize;
-(CAEmitterLayer  *(^)(double  emitterDepth))set_emitterDepth;
-(CAEmitterLayer  *(^)(NSString *  emitterShape))set_emitterShape;
-(CAEmitterLayer  *(^)(NSString *  emitterMode))set_emitterMode;
-(CAEmitterLayer  *(^)(NSString *  renderMode))set_renderMode;
-(CAEmitterLayer  *(^)(BOOL  preservesDepth))set_preservesDepth;
-(CAEmitterLayer  *(^)(float  velocity))set_velocity;
-(CAEmitterLayer  *(^)(float  scale))set_scale;
-(CAEmitterLayer  *(^)(float  spin))set_spin;
-(CAEmitterLayer  *(^)(unsigned int  seed))set_seed;




//superclass pros CALayer
-(CAEmitterLayer  *(^)(CGPoint  position))set_position;
-(CAEmitterLayer  *(^)(double  zPosition))set_zPosition;
-(CAEmitterLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint;
-(CAEmitterLayer  *(^)(double  anchorPointZ))set_anchorPointZ;
-(CAEmitterLayer  *(^)(CATransform3D  transform))set_transform;
-(CAEmitterLayer  *(^)(BOOL  hidden))set_hidden;
-(CAEmitterLayer  *(^)(BOOL  doubleSided))set_doubleSided;
-(CAEmitterLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped;
-(CAEmitterLayer  *(^)(NSArray *  sublayers))set_sublayers;
-(CAEmitterLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform;
-(CAEmitterLayer  *(^)(CALayer *  mask))set_mask;
-(CAEmitterLayer  *(^)(BOOL  masksToBounds))set_masksToBounds;
-(CAEmitterLayer  *(^)(NSString *  contentsGravity))set_contentsGravity;
-(CAEmitterLayer  *(^)(double  contentsScale))set_contentsScale;
-(CAEmitterLayer  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CAEmitterLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CAEmitterLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CAEmitterLayer  *(^)(BOOL  opaque))set_opaque;
-(CAEmitterLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange;
-(CAEmitterLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously;
-(CAEmitterLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask;
-(CAEmitterLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing;
-(CAEmitterLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor;
-(CAEmitterLayer  *(^)(double  cornerRadius))set_cornerRadius;
-(CAEmitterLayer  *(^)(double  borderWidth))set_borderWidth;
-(CAEmitterLayer  *(^)(CGColorRef  borderColor))set_borderColor;
-(CAEmitterLayer  *(^)(float  opacity))set_opacity;
-(CAEmitterLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity;
-(CAEmitterLayer  *(^)(NSArray *  filters))set_filters;
-(CAEmitterLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters;
-(CAEmitterLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize;
-(CAEmitterLayer  *(^)(double  rasterizationScale))set_rasterizationScale;
-(CAEmitterLayer  *(^)(CGColorRef  shadowColor))set_shadowColor;
-(CAEmitterLayer  *(^)(float  shadowOpacity))set_shadowOpacity;
-(CAEmitterLayer  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(CAEmitterLayer  *(^)(double  shadowRadius))set_shadowRadius;
-(CAEmitterLayer  *(^)(CGPathRef  shadowPath))set_shadowPath;
-(CAEmitterLayer  *(^)(NSDictionary *  actions))set_actions;
-(CAEmitterLayer  *(^)(NSString *  name))set_name;
-(CAEmitterLayer  *(^)(NSDictionary *  style))set_style;
-(CAEmitterLayer  *(^)(double  beginTime))set_beginTime;
-(CAEmitterLayer  *(^)(double  duration))set_duration;
-(CAEmitterLayer  *(^)(float  speed))set_speed;
-(CAEmitterLayer  *(^)(double  timeOffset))set_timeOffset;
-(CAEmitterLayer  *(^)(float  repeatCount))set_repeatCount;
-(CAEmitterLayer  *(^)(double  repeatDuration))set_repeatDuration;
-(CAEmitterLayer  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAEmitterLayer  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CAEmitterLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAEmitterLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAEmitterLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAEmitterLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAEmitterLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAEmitterLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAEmitterLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAEmitterLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAEmitterLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAEmitterLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAEmitterLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAEmitterLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAEmitterLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAEmitterLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end