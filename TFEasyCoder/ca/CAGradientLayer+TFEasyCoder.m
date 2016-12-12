//
//  CAGradientLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAGradientLayer+TFEasyCoder.h"


@implementation CAGradientLayer (TFEasyCoder)





-(CAGradientLayer  *(^)(NSArray *  colors))set_colors{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  colors){
        weakSelf.colors = colors;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSArray *  locations))set_locations{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  locations){
        weakSelf.locations = locations;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CGPoint  startPoint))set_startPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  startPoint){
        weakSelf.startPoint = startPoint;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CGPoint  endPoint))set_endPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  endPoint){
        weakSelf.endPoint = endPoint;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  type))set_type{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  type){
        weakSelf.type = type;
        return weakSelf;
    };
}





//superclass pros CALayer
-(CAGradientLayer  *(^)(CGPoint  position))set_position{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  position){
        weakSelf.position = position;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  zPosition))set_zPosition{
    __weak typeof(self) weakSelf = self;
    return ^(double  zPosition){
        weakSelf.zPosition = zPosition;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CGPoint  anchorPoint))set_anchorPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  anchorPoint){
        weakSelf.anchorPoint = anchorPoint;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  anchorPointZ))set_anchorPointZ{
    __weak typeof(self) weakSelf = self;
    return ^(double  anchorPointZ){
        weakSelf.anchorPointZ = anchorPointZ;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CATransform3D  transform))set_transform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  transform){
        weakSelf.transform = transform;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  hidden))set_hidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidden){
        weakSelf.hidden = hidden;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  doubleSided))set_doubleSided{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  doubleSided){
        weakSelf.doubleSided = doubleSided;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  geometryFlipped))set_geometryFlipped{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  geometryFlipped){
        weakSelf.geometryFlipped = geometryFlipped;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSArray *  sublayers))set_sublayers{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  sublayers){
        weakSelf.sublayers = sublayers;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CATransform3D  sublayerTransform))set_sublayerTransform{
    __weak typeof(self) weakSelf = self;
    return ^(CATransform3D  sublayerTransform){
        weakSelf.sublayerTransform = sublayerTransform;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CALayer *  mask))set_mask{
    __weak typeof(self) weakSelf = self;
    return ^(CALayer *  mask){
        weakSelf.mask = mask;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  masksToBounds))set_masksToBounds{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  masksToBounds){
        weakSelf.masksToBounds = masksToBounds;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  contentsGravity))set_contentsGravity{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  contentsGravity){
        weakSelf.contentsGravity = contentsGravity;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  contentsScale))set_contentsScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  contentsScale){
        weakSelf.contentsScale = contentsScale;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  minificationFilter))set_minificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  minificationFilter){
        weakSelf.minificationFilter = minificationFilter;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  magnificationFilter))set_magnificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  magnificationFilter){
        weakSelf.magnificationFilter = magnificationFilter;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(float  minificationFilterBias))set_minificationFilterBias{
    __weak typeof(self) weakSelf = self;
    return ^(float  minificationFilterBias){
        weakSelf.minificationFilterBias = minificationFilterBias;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  opaque))set_opaque{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  opaque){
        weakSelf.opaque = opaque;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  needsDisplayOnBoundsChange))set_needsDisplayOnBoundsChange{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  needsDisplayOnBoundsChange){
        weakSelf.needsDisplayOnBoundsChange = needsDisplayOnBoundsChange;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  drawsAsynchronously))set_drawsAsynchronously{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  drawsAsynchronously){
        weakSelf.drawsAsynchronously = drawsAsynchronously;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(unsigned int  edgeAntialiasingMask))set_edgeAntialiasingMask{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned int  edgeAntialiasingMask){
        weakSelf.edgeAntialiasingMask = edgeAntialiasingMask;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  allowsEdgeAntialiasing))set_allowsEdgeAntialiasing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsEdgeAntialiasing){
        weakSelf.allowsEdgeAntialiasing = allowsEdgeAntialiasing;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CGColorRef  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  cornerRadius))set_cornerRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  cornerRadius){
        weakSelf.cornerRadius = cornerRadius;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  borderWidth))set_borderWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  borderWidth){
        weakSelf.borderWidth = borderWidth;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CGColorRef  borderColor))set_borderColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  borderColor){
        weakSelf.borderColor = borderColor;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(float  opacity))set_opacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  opacity){
        weakSelf.opacity = opacity;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  allowsGroupOpacity))set_allowsGroupOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsGroupOpacity){
        weakSelf.allowsGroupOpacity = allowsGroupOpacity;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSArray *  filters))set_filters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  filters){
        weakSelf.filters = filters;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSArray *  backgroundFilters))set_backgroundFilters{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  backgroundFilters){
        weakSelf.backgroundFilters = backgroundFilters;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  shouldRasterize))set_shouldRasterize{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldRasterize){
        weakSelf.shouldRasterize = shouldRasterize;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  rasterizationScale))set_rasterizationScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  rasterizationScale){
        weakSelf.rasterizationScale = rasterizationScale;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CGColorRef  shadowColor))set_shadowColor{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  shadowColor){
        weakSelf.shadowColor = shadowColor;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(float  shadowOpacity))set_shadowOpacity{
    __weak typeof(self) weakSelf = self;
    return ^(float  shadowOpacity){
        weakSelf.shadowOpacity = shadowOpacity;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CGSize  shadowOffset))set_shadowOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  shadowOffset){
        weakSelf.shadowOffset = shadowOffset;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  shadowRadius))set_shadowRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  shadowRadius){
        weakSelf.shadowRadius = shadowRadius;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CGPathRef  shadowPath))set_shadowPath{
    __weak typeof(self) weakSelf = self;
    return ^(CGPathRef  shadowPath){
        weakSelf.shadowPath = shadowPath;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSDictionary *  actions))set_actions{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  actions){
        weakSelf.actions = actions;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  name))set_name{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  name){
        weakSelf.name = name;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSDictionary *  style))set_style{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  style){
        weakSelf.style = style;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  beginTime))set_beginTime{
    __weak typeof(self) weakSelf = self;
    return ^(double  beginTime){
        weakSelf.beginTime = beginTime;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  duration))set_duration{
    __weak typeof(self) weakSelf = self;
    return ^(double  duration){
        weakSelf.duration = duration;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(float  speed))set_speed{
    __weak typeof(self) weakSelf = self;
    return ^(float  speed){
        weakSelf.speed = speed;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  timeOffset))set_timeOffset{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeOffset){
        weakSelf.timeOffset = timeOffset;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(float  repeatCount))set_repeatCount{
    __weak typeof(self) weakSelf = self;
    return ^(float  repeatCount){
        weakSelf.repeatCount = repeatCount;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(double  repeatDuration))set_repeatDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  repeatDuration){
        weakSelf.repeatDuration = repeatDuration;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  autoreverses))set_autoreverses{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  autoreverses){
        weakSelf.autoreverses = autoreverses;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  fillMode))set_fillMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  fillMode){
        weakSelf.fillMode = fillMode;
        return weakSelf;
    };
}

//superclass pros NSObject
-(CAGradientLayer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(CAGradientLayer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end