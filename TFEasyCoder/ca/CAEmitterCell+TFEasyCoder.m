//
//  CAEmitterCell+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAEmitterCell+TFEasyCoder.h"


@implementation CAEmitterCell (TFEasyCoder)







-(CAEmitterCell  *(^)(NSString *  name))set_name{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  name){
        weakSelf.name = name;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  birthRate))set_birthRate{
    __weak typeof(self) weakSelf = self;
    return ^(float  birthRate){
        weakSelf.birthRate = birthRate;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  lifetime))set_lifetime{
    __weak typeof(self) weakSelf = self;
    return ^(float  lifetime){
        weakSelf.lifetime = lifetime;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  lifetimeRange))set_lifetimeRange{
    __weak typeof(self) weakSelf = self;
    return ^(float  lifetimeRange){
        weakSelf.lifetimeRange = lifetimeRange;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  emissionLatitude))set_emissionLatitude{
    __weak typeof(self) weakSelf = self;
    return ^(double  emissionLatitude){
        weakSelf.emissionLatitude = emissionLatitude;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  emissionLongitude))set_emissionLongitude{
    __weak typeof(self) weakSelf = self;
    return ^(double  emissionLongitude){
        weakSelf.emissionLongitude = emissionLongitude;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  emissionRange))set_emissionRange{
    __weak typeof(self) weakSelf = self;
    return ^(double  emissionRange){
        weakSelf.emissionRange = emissionRange;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  velocity))set_velocity{
    __weak typeof(self) weakSelf = self;
    return ^(double  velocity){
        weakSelf.velocity = velocity;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  velocityRange))set_velocityRange{
    __weak typeof(self) weakSelf = self;
    return ^(double  velocityRange){
        weakSelf.velocityRange = velocityRange;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  xAcceleration))set_xAcceleration{
    __weak typeof(self) weakSelf = self;
    return ^(double  xAcceleration){
        weakSelf.xAcceleration = xAcceleration;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  yAcceleration))set_yAcceleration{
    __weak typeof(self) weakSelf = self;
    return ^(double  yAcceleration){
        weakSelf.yAcceleration = yAcceleration;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  zAcceleration))set_zAcceleration{
    __weak typeof(self) weakSelf = self;
    return ^(double  zAcceleration){
        weakSelf.zAcceleration = zAcceleration;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  scale))set_scale{
    __weak typeof(self) weakSelf = self;
    return ^(double  scale){
        weakSelf.scale = scale;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  scaleRange))set_scaleRange{
    __weak typeof(self) weakSelf = self;
    return ^(double  scaleRange){
        weakSelf.scaleRange = scaleRange;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  scaleSpeed))set_scaleSpeed{
    __weak typeof(self) weakSelf = self;
    return ^(double  scaleSpeed){
        weakSelf.scaleSpeed = scaleSpeed;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  spin))set_spin{
    __weak typeof(self) weakSelf = self;
    return ^(double  spin){
        weakSelf.spin = spin;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  spinRange))set_spinRange{
    __weak typeof(self) weakSelf = self;
    return ^(double  spinRange){
        weakSelf.spinRange = spinRange;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(CGColorRef  color))set_color{
    __weak typeof(self) weakSelf = self;
    return ^(CGColorRef  color){
        weakSelf.color = color;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  redRange))set_redRange{
    __weak typeof(self) weakSelf = self;
    return ^(float  redRange){
        weakSelf.redRange = redRange;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  greenRange))set_greenRange{
    __weak typeof(self) weakSelf = self;
    return ^(float  greenRange){
        weakSelf.greenRange = greenRange;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  blueRange))set_blueRange{
    __weak typeof(self) weakSelf = self;
    return ^(float  blueRange){
        weakSelf.blueRange = blueRange;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  alphaRange))set_alphaRange{
    __weak typeof(self) weakSelf = self;
    return ^(float  alphaRange){
        weakSelf.alphaRange = alphaRange;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  redSpeed))set_redSpeed{
    __weak typeof(self) weakSelf = self;
    return ^(float  redSpeed){
        weakSelf.redSpeed = redSpeed;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  greenSpeed))set_greenSpeed{
    __weak typeof(self) weakSelf = self;
    return ^(float  greenSpeed){
        weakSelf.greenSpeed = greenSpeed;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  blueSpeed))set_blueSpeed{
    __weak typeof(self) weakSelf = self;
    return ^(float  blueSpeed){
        weakSelf.blueSpeed = blueSpeed;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  alphaSpeed))set_alphaSpeed{
    __weak typeof(self) weakSelf = self;
    return ^(float  alphaSpeed){
        weakSelf.alphaSpeed = alphaSpeed;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  contentsScale))set_contentsScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  contentsScale){
        weakSelf.contentsScale = contentsScale;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSString *  minificationFilter))set_minificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  minificationFilter){
        weakSelf.minificationFilter = minificationFilter;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSString *  magnificationFilter))set_magnificationFilter{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  magnificationFilter){
        weakSelf.magnificationFilter = magnificationFilter;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  minificationFilterBias))set_minificationFilterBias{
    __weak typeof(self) weakSelf = self;
    return ^(float  minificationFilterBias){
        weakSelf.minificationFilterBias = minificationFilterBias;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSArray *  emitterCells))set_emitterCells{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  emitterCells){
        weakSelf.emitterCells = emitterCells;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSDictionary *  style))set_style{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  style){
        weakSelf.style = style;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  beginTime))set_beginTime{
    __weak typeof(self) weakSelf = self;
    return ^(double  beginTime){
        weakSelf.beginTime = beginTime;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  duration))set_duration{
    __weak typeof(self) weakSelf = self;
    return ^(double  duration){
        weakSelf.duration = duration;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  speed))set_speed{
    __weak typeof(self) weakSelf = self;
    return ^(float  speed){
        weakSelf.speed = speed;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  timeOffset))set_timeOffset{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeOffset){
        weakSelf.timeOffset = timeOffset;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(float  repeatCount))set_repeatCount{
    __weak typeof(self) weakSelf = self;
    return ^(float  repeatCount){
        weakSelf.repeatCount = repeatCount;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(double  repeatDuration))set_repeatDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  repeatDuration){
        weakSelf.repeatDuration = repeatDuration;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(BOOL  autoreverses))set_autoreverses{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  autoreverses){
        weakSelf.autoreverses = autoreverses;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSString *  fillMode))set_fillMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  fillMode){
        weakSelf.fillMode = fillMode;
        return weakSelf;
    };
}





//superclass pros NSObject
-(CAEmitterCell  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(CAEmitterCell  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end