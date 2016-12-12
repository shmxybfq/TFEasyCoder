//
//  CAReplicatorLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAReplicatorLayer+TFEasyCoder.h"


@implementation CAReplicatorLayer (TFEasyCoder)





-(CAReplicatorLayer  *(^)(long long  instanceCount))set_instanceCount{
    __weak typeof(self) weakSelf = self;
    return ^(long long  instanceCount){
        weakSelf.instanceCount = instanceCount;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  preservesDepth))set_preservesDepth{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  preservesDepth){
        weakSelf.preservesDepth = preservesDepth;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  instanceDelay))set_instanceDelay{
    __weak typeof(self) weakSelf = self;
    return ^(double  instanceDelay){
        weakSelf.instanceDelay = instanceDelay;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CATransform3D  instanceTransform))set_instanceTransform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  instanceTransform){
        weakSelf.instanceTransform = instanceTransform;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CGColorRef  instanceColor))set_instanceColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  instanceColor){
        weakSelf.instanceColor = instanceColor;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(float  instanceRedOffset))set_instanceRedOffset{
    __weak typeof(self) weakSelf = self;
    return ^(float  instanceRedOffset){
        weakSelf.instanceRedOffset = instanceRedOffset;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(float  instanceGreenOffset))set_instanceGreenOffset{
    __weak typeof(self) weakSelf = self;
    return ^(float  instanceGreenOffset){
        weakSelf.instanceGreenOffset = instanceGreenOffset;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(float  instanceBlueOffset))set_instanceBlueOffset{
    __weak typeof(self) weakSelf = self;
    return ^(float  instanceBlueOffset){
        weakSelf.instanceBlueOffset = instanceBlueOffset;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(float  instanceAlphaOffset))set_instanceAlphaOffset{
    __weak typeof(self) weakSelf = self;
    return ^(float  instanceAlphaOffset){
        weakSelf.instanceAlphaOffset = instanceAlphaOffset;
        return weakSelf;
    };
}





//superclass pros CALayer
-(CAReplicatorLayer  *(^)(CGPoint  position))set_position{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  position){
        weakSelf.position = position;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  zPosition))set_zPosition{
    __weak typeof(self) weakSelf = self;
    return ^(double  zPosition){
        weakSelf.zPosition = zPosition;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  anchorPoint){
        weakSelf.anchorPoint = anchorPoint;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  anchorPointZ))set_anchorPointZ{
    __weak typeof(self) weakSelf = self;
    return ^(double  anchorPointZ){
        weakSelf.anchorPointZ = anchorPointZ;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CATransform3D  transform))set_transform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  transform){
        weakSelf.transform = transform;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  hidden))set_hidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidden){
        weakSelf.hidden = hidden;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  doubleSided))set_doubleSided{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  doubleSided){
        weakSelf.doubleSided = doubleSided;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  geometryFlipped){
        weakSelf.geometryFlipped = geometryFlipped;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSArray *  sublayers))set_sublayers{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  sublayers){
        weakSelf.sublayers = sublayers;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  sublayerTransform){
        weakSelf.sublayerTransform = sublayerTransform;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CALayer *  mask))set_mask{
    __weak typeof(self) weakSelf = self;
    return ^(CALayer *  mask){
        weakSelf.mask = mask;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  masksToBounds))set_masksToBounds{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  masksToBounds){
        weakSelf.masksToBounds = masksToBounds;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSString *  contentsGravity))set_contentsGravity{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  contentsGravity){
        weakSelf.contentsGravity = contentsGravity;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  contentsScale))set_contentsScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  contentsScale){
        weakSelf.contentsScale = contentsScale;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSString *  minificationFilter))set_minificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  minificationFilter){
        weakSelf.minificationFilter = minificationFilter;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  magnificationFilter){
        weakSelf.magnificationFilter = magnificationFilter;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias{
    __weak typeof(self) weakSelf = self;
    return ^(float  minificationFilterBias){
        weakSelf.minificationFilterBias = minificationFilterBias;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  opaque))set_opaque{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  opaque){
        weakSelf.opaque = opaque;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  needsDisplayOnBoundsChange){
        weakSelf.needsDisplayOnBoundsChange = needsDisplayOnBoundsChange;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  drawsAsynchronously){
        weakSelf.drawsAsynchronously = drawsAsynchronously;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned int  edgeAntialiasingMask){
        weakSelf.edgeAntialiasingMask = edgeAntialiasingMask;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsEdgeAntialiasing){
        weakSelf.allowsEdgeAntialiasing = allowsEdgeAntialiasing;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  cornerRadius))set_cornerRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  cornerRadius){
        weakSelf.cornerRadius = cornerRadius;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  borderWidth))set_borderWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  borderWidth){
        weakSelf.borderWidth = borderWidth;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CGColorRef  borderColor))set_borderColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  borderColor){
        weakSelf.borderColor = borderColor;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(float  opacity))set_opacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  opacity){
        weakSelf.opacity = opacity;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsGroupOpacity){
        weakSelf.allowsGroupOpacity = allowsGroupOpacity;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSArray *  filters))set_filters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  filters){
        weakSelf.filters = filters;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  backgroundFilters){
        weakSelf.backgroundFilters = backgroundFilters;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldRasterize){
        weakSelf.shouldRasterize = shouldRasterize;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  rasterizationScale))set_rasterizationScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  rasterizationScale){
        weakSelf.rasterizationScale = rasterizationScale;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CGColorRef  shadowColor))set_shadowColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  shadowColor){
        weakSelf.shadowColor = shadowColor;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(float  shadowOpacity))set_shadowOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  shadowOpacity){
        weakSelf.shadowOpacity = shadowOpacity;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CGSize  shadowOffset))set_shadowOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  shadowOffset){
        weakSelf.shadowOffset = shadowOffset;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  shadowRadius))set_shadowRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  shadowRadius){
        weakSelf.shadowRadius = shadowRadius;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CGPathRef  shadowPath))set_shadowPath{
    __weak typeof(self) weakSelf = self;
    return ^(CGPathRef  shadowPath){
        weakSelf.shadowPath = shadowPath;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSDictionary *  actions))set_actions{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  actions){
        weakSelf.actions = actions;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSString *  name))set_name{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  name){
        weakSelf.name = name;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSDictionary *  style))set_style{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  style){
        weakSelf.style = style;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  beginTime))set_beginTime{
    __weak typeof(self) weakSelf = self;
    return ^(double  beginTime){
        weakSelf.beginTime = beginTime;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  duration))set_duration{
    __weak typeof(self) weakSelf = self;
    return ^(double  duration){
        weakSelf.duration = duration;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(float  speed))set_speed{
    __weak typeof(self) weakSelf = self;
    return ^(float  speed){
        weakSelf.speed = speed;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  timeOffset))set_timeOffset{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeOffset){
        weakSelf.timeOffset = timeOffset;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(float  repeatCount))set_repeatCount{
    __weak typeof(self) weakSelf = self;
    return ^(float  repeatCount){
        weakSelf.repeatCount = repeatCount;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(double  repeatDuration))set_repeatDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  repeatDuration){
        weakSelf.repeatDuration = repeatDuration;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  autoreverses))set_autoreverses{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  autoreverses){
        weakSelf.autoreverses = autoreverses;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSString *  fillMode))set_fillMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  fillMode){
        weakSelf.fillMode = fillMode;
        return weakSelf;
    };
}

//superclass pros NSObject
-(CAReplicatorLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(CAReplicatorLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end