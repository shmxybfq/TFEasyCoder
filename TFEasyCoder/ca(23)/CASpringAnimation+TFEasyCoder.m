//
//  CASpringAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CASpringAnimation+TFEasyCoder.h"


@implementation CASpringAnimation (TFEasyCoder)





-(CASpringAnimation  *(^)(double  mass))set_mass{
    __weak typeof(self) weakSelf = self;
    return ^(double  mass){
        weakSelf.mass = mass;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(double  stiffness))set_stiffness{
    __weak typeof(self) weakSelf = self;
    return ^(double  stiffness){
        weakSelf.stiffness = stiffness;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(double  damping))set_damping{
    __weak typeof(self) weakSelf = self;
    return ^(double  damping){
        weakSelf.damping = damping;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(double  initialVelocity))set_initialVelocity{
    __weak typeof(self) weakSelf = self;
    return ^(double  initialVelocity){
        weakSelf.initialVelocity = initialVelocity;
        return weakSelf;
    };
}





//superclass pros CABasicAnimation
//superclass pros CAPropertyAnimation
-(CASpringAnimation  *(^)(NSString *  keyPath))set_keyPath{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  keyPath){
        weakSelf.keyPath = keyPath;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(BOOL  additive))set_additive{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  additive){
        weakSelf.additive = additive;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(BOOL  cumulative))set_cumulative{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  cumulative){
        weakSelf.cumulative = cumulative;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(CAValueFunction *  valueFunction))set_valueFunction{
    __weak typeof(self) weakSelf = self;
    return ^(CAValueFunction *  valueFunction){
        weakSelf.valueFunction = valueFunction;
        return weakSelf;
    };
}

//superclass pros CAAnimation
-(CASpringAnimation  *(^)(CAMediaTimingFunction *  timingFunction))set_timingFunction{
    __weak typeof(self) weakSelf = self;
    return ^(CAMediaTimingFunction *  timingFunction){
        weakSelf.timingFunction = timingFunction;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(double  beginTime))set_beginTime{
    __weak typeof(self) weakSelf = self;
    return ^(double  beginTime){
        weakSelf.beginTime = beginTime;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(double  duration))set_duration{
    __weak typeof(self) weakSelf = self;
    return ^(double  duration){
        weakSelf.duration = duration;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(float  speed))set_speed{
    __weak typeof(self) weakSelf = self;
    return ^(float  speed){
        weakSelf.speed = speed;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(double  timeOffset))set_timeOffset{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeOffset){
        weakSelf.timeOffset = timeOffset;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(float  repeatCount))set_repeatCount{
    __weak typeof(self) weakSelf = self;
    return ^(float  repeatCount){
        weakSelf.repeatCount = repeatCount;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(double  repeatDuration))set_repeatDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  repeatDuration){
        weakSelf.repeatDuration = repeatDuration;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(BOOL  autoreverses))set_autoreverses{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  autoreverses){
        weakSelf.autoreverses = autoreverses;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(NSString *  fillMode))set_fillMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  fillMode){
        weakSelf.fillMode = fillMode;
        return weakSelf;
    };
}

//superclass pros NSObject
-(CASpringAnimation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(CASpringAnimation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end