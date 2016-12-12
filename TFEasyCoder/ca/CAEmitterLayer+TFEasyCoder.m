//
//  CAEmitterLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAEmitterLayer+TFEasyCoder.h"


@implementation CAEmitterLayer (TFEasyCoder)






-(CAEmitterLayer  *(^)(NSArray *  emitterCells))set_emitterCells{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  emitterCells){
        weakSelf.emitterCells = emitterCells;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  birthRate))set_birthRate{
    __weak typeof(self) weakSelf = self;
    return ^(float  birthRate){
        weakSelf.birthRate = birthRate;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  lifetime))set_lifetime{
    __weak typeof(self) weakSelf = self;
    return ^(float  lifetime){
        weakSelf.lifetime = lifetime;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CGPoint  emitterPosition))set_emitterPosition{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  emitterPosition){
        weakSelf.emitterPosition = emitterPosition;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  emitterZPosition))set_emitterZPosition{
    __weak typeof(self) weakSelf = self;
    return ^(double  emitterZPosition){
        weakSelf.emitterZPosition = emitterZPosition;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CGSize  emitterSize))set_emitterSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  emitterSize){
        weakSelf.emitterSize = emitterSize;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  emitterDepth))set_emitterDepth{
    __weak typeof(self) weakSelf = self;
    return ^(double  emitterDepth){
        weakSelf.emitterDepth = emitterDepth;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  emitterShape))set_emitterShape{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  emitterShape){
        weakSelf.emitterShape = emitterShape;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  emitterMode))set_emitterMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  emitterMode){
        weakSelf.emitterMode = emitterMode;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  renderMode))set_renderMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  renderMode){
        weakSelf.renderMode = renderMode;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  preservesDepth))set_preservesDepth{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  preservesDepth){
        weakSelf.preservesDepth = preservesDepth;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  velocity))set_velocity{
    __weak typeof(self) weakSelf = self;
    return ^(float  velocity){
        weakSelf.velocity = velocity;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  scale))set_scale{
    __weak typeof(self) weakSelf = self;
    return ^(float  scale){
        weakSelf.scale = scale;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  spin))set_spin{
    __weak typeof(self) weakSelf = self;
    return ^(float  spin){
        weakSelf.spin = spin;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(unsigned int  seed))set_seed{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned int  seed){
        weakSelf.seed = seed;
        return weakSelf;
    };
}





//superclass pros CALayer
-(CAEmitterLayer  *(^)(CGPoint  position))set_position{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  position){
        weakSelf.position = position;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  zPosition))set_zPosition{
    __weak typeof(self) weakSelf = self;
    return ^(double  zPosition){
        weakSelf.zPosition = zPosition;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  anchorPoint){
        weakSelf.anchorPoint = anchorPoint;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  anchorPointZ))set_anchorPointZ{
    __weak typeof(self) weakSelf = self;
    return ^(double  anchorPointZ){
        weakSelf.anchorPointZ = anchorPointZ;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CATransform3D  transform))set_transform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  transform){
        weakSelf.transform = transform;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  hidden))set_hidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidden){
        weakSelf.hidden = hidden;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  doubleSided))set_doubleSided{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  doubleSided){
        weakSelf.doubleSided = doubleSided;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  geometryFlipped){
        weakSelf.geometryFlipped = geometryFlipped;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSArray *  sublayers))set_sublayers{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  sublayers){
        weakSelf.sublayers = sublayers;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  sublayerTransform){
        weakSelf.sublayerTransform = sublayerTransform;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CALayer *  mask))set_mask{
    __weak typeof(self) weakSelf = self;
    return ^(CALayer *  mask){
        weakSelf.mask = mask;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  masksToBounds))set_masksToBounds{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  masksToBounds){
        weakSelf.masksToBounds = masksToBounds;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  contentsGravity))set_contentsGravity{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  contentsGravity){
        weakSelf.contentsGravity = contentsGravity;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  contentsScale))set_contentsScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  contentsScale){
        weakSelf.contentsScale = contentsScale;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  minificationFilter))set_minificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  minificationFilter){
        weakSelf.minificationFilter = minificationFilter;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  magnificationFilter){
        weakSelf.magnificationFilter = magnificationFilter;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias{
    __weak typeof(self) weakSelf = self;
    return ^(float  minificationFilterBias){
        weakSelf.minificationFilterBias = minificationFilterBias;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  opaque))set_opaque{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  opaque){
        weakSelf.opaque = opaque;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  needsDisplayOnBoundsChange){
        weakSelf.needsDisplayOnBoundsChange = needsDisplayOnBoundsChange;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  drawsAsynchronously){
        weakSelf.drawsAsynchronously = drawsAsynchronously;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned int  edgeAntialiasingMask){
        weakSelf.edgeAntialiasingMask = edgeAntialiasingMask;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsEdgeAntialiasing){
        weakSelf.allowsEdgeAntialiasing = allowsEdgeAntialiasing;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  cornerRadius))set_cornerRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  cornerRadius){
        weakSelf.cornerRadius = cornerRadius;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  borderWidth))set_borderWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  borderWidth){
        weakSelf.borderWidth = borderWidth;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CGColorRef  borderColor))set_borderColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  borderColor){
        weakSelf.borderColor = borderColor;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  opacity))set_opacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  opacity){
        weakSelf.opacity = opacity;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsGroupOpacity){
        weakSelf.allowsGroupOpacity = allowsGroupOpacity;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSArray *  filters))set_filters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  filters){
        weakSelf.filters = filters;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  backgroundFilters){
        weakSelf.backgroundFilters = backgroundFilters;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldRasterize){
        weakSelf.shouldRasterize = shouldRasterize;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  rasterizationScale))set_rasterizationScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  rasterizationScale){
        weakSelf.rasterizationScale = rasterizationScale;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CGColorRef  shadowColor))set_shadowColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  shadowColor){
        weakSelf.shadowColor = shadowColor;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  shadowOpacity))set_shadowOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  shadowOpacity){
        weakSelf.shadowOpacity = shadowOpacity;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CGSize  shadowOffset))set_shadowOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  shadowOffset){
        weakSelf.shadowOffset = shadowOffset;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  shadowRadius))set_shadowRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  shadowRadius){
        weakSelf.shadowRadius = shadowRadius;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CGPathRef  shadowPath))set_shadowPath{
    __weak typeof(self) weakSelf = self;
    return ^(CGPathRef  shadowPath){
        weakSelf.shadowPath = shadowPath;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSDictionary *  actions))set_actions{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  actions){
        weakSelf.actions = actions;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  name))set_name{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  name){
        weakSelf.name = name;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSDictionary *  style))set_style{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  style){
        weakSelf.style = style;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  beginTime))set_beginTime{
    __weak typeof(self) weakSelf = self;
    return ^(double  beginTime){
        weakSelf.beginTime = beginTime;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  duration))set_duration{
    __weak typeof(self) weakSelf = self;
    return ^(double  duration){
        weakSelf.duration = duration;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  speed))set_speed{
    __weak typeof(self) weakSelf = self;
    return ^(float  speed){
        weakSelf.speed = speed;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  timeOffset))set_timeOffset{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeOffset){
        weakSelf.timeOffset = timeOffset;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(float  repeatCount))set_repeatCount{
    __weak typeof(self) weakSelf = self;
    return ^(float  repeatCount){
        weakSelf.repeatCount = repeatCount;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(double  repeatDuration))set_repeatDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  repeatDuration){
        weakSelf.repeatDuration = repeatDuration;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  autoreverses))set_autoreverses{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  autoreverses){
        weakSelf.autoreverses = autoreverses;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  fillMode))set_fillMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  fillMode){
        weakSelf.fillMode = fillMode;
        return weakSelf;
    };
}

//superclass pros NSObject
-(CAEmitterLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(CAEmitterLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end