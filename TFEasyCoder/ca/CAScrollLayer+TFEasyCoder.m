//
//  CAScrollLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAScrollLayer+TFEasyCoder.h"


@implementation CAScrollLayer (TFEasyCoder)





-(CAScrollLayer  *(^)(NSString *  scrollMode))set_scrollMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  scrollMode){
        weakSelf.scrollMode = scrollMode;
        return weakSelf;
    };
}





//superclass pros CALayer
-(CAScrollLayer  *(^)(CGPoint  position))set_position{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  position){
        weakSelf.position = position;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  zPosition))set_zPosition{
    __weak typeof(self) weakSelf = self;
    return ^(double  zPosition){
        weakSelf.zPosition = zPosition;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  anchorPoint){
        weakSelf.anchorPoint = anchorPoint;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  anchorPointZ))set_anchorPointZ{
    __weak typeof(self) weakSelf = self;
    return ^(double  anchorPointZ){
        weakSelf.anchorPointZ = anchorPointZ;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CATransform3D  transform))set_transform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  transform){
        weakSelf.transform = transform;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  hidden))set_hidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidden){
        weakSelf.hidden = hidden;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  doubleSided))set_doubleSided{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  doubleSided){
        weakSelf.doubleSided = doubleSided;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  geometryFlipped){
        weakSelf.geometryFlipped = geometryFlipped;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSArray *  sublayers))set_sublayers{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  sublayers){
        weakSelf.sublayers = sublayers;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  sublayerTransform){
        weakSelf.sublayerTransform = sublayerTransform;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CALayer *  mask))set_mask{
    __weak typeof(self) weakSelf = self;
    return ^(CALayer *  mask){
        weakSelf.mask = mask;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  masksToBounds))set_masksToBounds{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  masksToBounds){
        weakSelf.masksToBounds = masksToBounds;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSString *  contentsGravity))set_contentsGravity{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  contentsGravity){
        weakSelf.contentsGravity = contentsGravity;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  contentsScale))set_contentsScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  contentsScale){
        weakSelf.contentsScale = contentsScale;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSString *  minificationFilter))set_minificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  minificationFilter){
        weakSelf.minificationFilter = minificationFilter;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  magnificationFilter){
        weakSelf.magnificationFilter = magnificationFilter;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias{
    __weak typeof(self) weakSelf = self;
    return ^(float  minificationFilterBias){
        weakSelf.minificationFilterBias = minificationFilterBias;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  opaque))set_opaque{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  opaque){
        weakSelf.opaque = opaque;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  needsDisplayOnBoundsChange){
        weakSelf.needsDisplayOnBoundsChange = needsDisplayOnBoundsChange;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  drawsAsynchronously){
        weakSelf.drawsAsynchronously = drawsAsynchronously;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned int  edgeAntialiasingMask){
        weakSelf.edgeAntialiasingMask = edgeAntialiasingMask;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsEdgeAntialiasing){
        weakSelf.allowsEdgeAntialiasing = allowsEdgeAntialiasing;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  cornerRadius))set_cornerRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  cornerRadius){
        weakSelf.cornerRadius = cornerRadius;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  borderWidth))set_borderWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  borderWidth){
        weakSelf.borderWidth = borderWidth;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CGColorRef  borderColor))set_borderColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  borderColor){
        weakSelf.borderColor = borderColor;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(float  opacity))set_opacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  opacity){
        weakSelf.opacity = opacity;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsGroupOpacity){
        weakSelf.allowsGroupOpacity = allowsGroupOpacity;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSArray *  filters))set_filters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  filters){
        weakSelf.filters = filters;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  backgroundFilters){
        weakSelf.backgroundFilters = backgroundFilters;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldRasterize){
        weakSelf.shouldRasterize = shouldRasterize;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  rasterizationScale))set_rasterizationScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  rasterizationScale){
        weakSelf.rasterizationScale = rasterizationScale;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CGColorRef  shadowColor))set_shadowColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  shadowColor){
        weakSelf.shadowColor = shadowColor;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(float  shadowOpacity))set_shadowOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  shadowOpacity){
        weakSelf.shadowOpacity = shadowOpacity;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CGSize  shadowOffset))set_shadowOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  shadowOffset){
        weakSelf.shadowOffset = shadowOffset;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  shadowRadius))set_shadowRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  shadowRadius){
        weakSelf.shadowRadius = shadowRadius;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CGPathRef  shadowPath))set_shadowPath{
    __weak typeof(self) weakSelf = self;
    return ^(CGPathRef  shadowPath){
        weakSelf.shadowPath = shadowPath;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSDictionary *  actions))set_actions{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  actions){
        weakSelf.actions = actions;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSString *  name))set_name{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  name){
        weakSelf.name = name;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSDictionary *  style))set_style{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  style){
        weakSelf.style = style;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  beginTime))set_beginTime{
    __weak typeof(self) weakSelf = self;
    return ^(double  beginTime){
        weakSelf.beginTime = beginTime;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  duration))set_duration{
    __weak typeof(self) weakSelf = self;
    return ^(double  duration){
        weakSelf.duration = duration;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(float  speed))set_speed{
    __weak typeof(self) weakSelf = self;
    return ^(float  speed){
        weakSelf.speed = speed;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  timeOffset))set_timeOffset{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeOffset){
        weakSelf.timeOffset = timeOffset;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(float  repeatCount))set_repeatCount{
    __weak typeof(self) weakSelf = self;
    return ^(float  repeatCount){
        weakSelf.repeatCount = repeatCount;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(double  repeatDuration))set_repeatDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  repeatDuration){
        weakSelf.repeatDuration = repeatDuration;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  autoreverses))set_autoreverses{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  autoreverses){
        weakSelf.autoreverses = autoreverses;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSString *  fillMode))set_fillMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  fillMode){
        weakSelf.fillMode = fillMode;
        return weakSelf;
    };
}

//superclass pros NSObject
-(CAScrollLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(CAScrollLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end