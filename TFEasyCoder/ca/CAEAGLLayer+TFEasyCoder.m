//
//  CAEAGLLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAEAGLLayer+TFEasyCoder.h"


@implementation CAEAGLLayer (TFEasyCoder)






-(CAEAGLLayer  *(^)(BOOL  presentsWithTransaction))set_presentsWithTransaction{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  presentsWithTransaction){
        weakSelf.presentsWithTransaction = presentsWithTransaction;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSDictionary *  drawableProperties))set_drawableProperties{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  drawableProperties){
        weakSelf.drawableProperties = drawableProperties;
        return weakSelf;
    };
}





//superclass pros CALayer
-(CAEAGLLayer  *(^)(CGPoint  position))set_position{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  position){
        weakSelf.position = position;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  zPosition))set_zPosition{
    __weak typeof(self) weakSelf = self;
    return ^(double  zPosition){
        weakSelf.zPosition = zPosition;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  anchorPoint){
        weakSelf.anchorPoint = anchorPoint;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  anchorPointZ))set_anchorPointZ{
    __weak typeof(self) weakSelf = self;
    return ^(double  anchorPointZ){
        weakSelf.anchorPointZ = anchorPointZ;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CATransform3D  transform))set_transform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  transform){
        weakSelf.transform = transform;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  hidden))set_hidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidden){
        weakSelf.hidden = hidden;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  doubleSided))set_doubleSided{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  doubleSided){
        weakSelf.doubleSided = doubleSided;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  geometryFlipped){
        weakSelf.geometryFlipped = geometryFlipped;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSArray *  sublayers))set_sublayers{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  sublayers){
        weakSelf.sublayers = sublayers;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  sublayerTransform){
        weakSelf.sublayerTransform = sublayerTransform;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CALayer *  mask))set_mask{
    __weak typeof(self) weakSelf = self;
    return ^(CALayer *  mask){
        weakSelf.mask = mask;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  masksToBounds))set_masksToBounds{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  masksToBounds){
        weakSelf.masksToBounds = masksToBounds;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSString *  contentsGravity))set_contentsGravity{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  contentsGravity){
        weakSelf.contentsGravity = contentsGravity;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  contentsScale))set_contentsScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  contentsScale){
        weakSelf.contentsScale = contentsScale;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSString *  minificationFilter))set_minificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  minificationFilter){
        weakSelf.minificationFilter = minificationFilter;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  magnificationFilter){
        weakSelf.magnificationFilter = magnificationFilter;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias{
    __weak typeof(self) weakSelf = self;
    return ^(float  minificationFilterBias){
        weakSelf.minificationFilterBias = minificationFilterBias;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  opaque))set_opaque{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  opaque){
        weakSelf.opaque = opaque;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  needsDisplayOnBoundsChange){
        weakSelf.needsDisplayOnBoundsChange = needsDisplayOnBoundsChange;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  drawsAsynchronously){
        weakSelf.drawsAsynchronously = drawsAsynchronously;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned int  edgeAntialiasingMask){
        weakSelf.edgeAntialiasingMask = edgeAntialiasingMask;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsEdgeAntialiasing){
        weakSelf.allowsEdgeAntialiasing = allowsEdgeAntialiasing;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  cornerRadius))set_cornerRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  cornerRadius){
        weakSelf.cornerRadius = cornerRadius;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  borderWidth))set_borderWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  borderWidth){
        weakSelf.borderWidth = borderWidth;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CGColorRef  borderColor))set_borderColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  borderColor){
        weakSelf.borderColor = borderColor;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(float  opacity))set_opacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  opacity){
        weakSelf.opacity = opacity;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsGroupOpacity){
        weakSelf.allowsGroupOpacity = allowsGroupOpacity;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSArray *  filters))set_filters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  filters){
        weakSelf.filters = filters;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  backgroundFilters){
        weakSelf.backgroundFilters = backgroundFilters;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldRasterize){
        weakSelf.shouldRasterize = shouldRasterize;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  rasterizationScale))set_rasterizationScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  rasterizationScale){
        weakSelf.rasterizationScale = rasterizationScale;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CGColorRef  shadowColor))set_shadowColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  shadowColor){
        weakSelf.shadowColor = shadowColor;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(float  shadowOpacity))set_shadowOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  shadowOpacity){
        weakSelf.shadowOpacity = shadowOpacity;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CGSize  shadowOffset))set_shadowOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  shadowOffset){
        weakSelf.shadowOffset = shadowOffset;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  shadowRadius))set_shadowRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  shadowRadius){
        weakSelf.shadowRadius = shadowRadius;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CGPathRef  shadowPath))set_shadowPath{
    __weak typeof(self) weakSelf = self;
    return ^(CGPathRef  shadowPath){
        weakSelf.shadowPath = shadowPath;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSDictionary *  actions))set_actions{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  actions){
        weakSelf.actions = actions;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSString *  name))set_name{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  name){
        weakSelf.name = name;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSDictionary *  style))set_style{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  style){
        weakSelf.style = style;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  beginTime))set_beginTime{
    __weak typeof(self) weakSelf = self;
    return ^(double  beginTime){
        weakSelf.beginTime = beginTime;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  duration))set_duration{
    __weak typeof(self) weakSelf = self;
    return ^(double  duration){
        weakSelf.duration = duration;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(float  speed))set_speed{
    __weak typeof(self) weakSelf = self;
    return ^(float  speed){
        weakSelf.speed = speed;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  timeOffset))set_timeOffset{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeOffset){
        weakSelf.timeOffset = timeOffset;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(float  repeatCount))set_repeatCount{
    __weak typeof(self) weakSelf = self;
    return ^(float  repeatCount){
        weakSelf.repeatCount = repeatCount;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(double  repeatDuration))set_repeatDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  repeatDuration){
        weakSelf.repeatDuration = repeatDuration;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  autoreverses))set_autoreverses{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  autoreverses){
        weakSelf.autoreverses = autoreverses;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSString *  fillMode))set_fillMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  fillMode){
        weakSelf.fillMode = fillMode;
        return weakSelf;
    };
}

//superclass pros NSObject
-(CAEAGLLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(CAEAGLLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end