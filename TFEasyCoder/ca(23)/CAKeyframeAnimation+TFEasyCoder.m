//
//  CAKeyframeAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAKeyframeAnimation+TFEasyCoder.h"


@implementation CAKeyframeAnimation (TFEasyCoder)





-(CAKeyframeAnimation  *(^)(NSArray *  values))set_values{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  values){
        weakSelf.values = values;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(CGPathRef  path))set_path{
    __weak typeof(self) weakSelf = self;
    return ^(CGPathRef  path){
        weakSelf.path = path;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSArray *  keyTimes))set_keyTimes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  keyTimes){
        weakSelf.keyTimes = keyTimes;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSArray *  timingFunctions))set_timingFunctions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  timingFunctions){
        weakSelf.timingFunctions = timingFunctions;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSString *  calculationMode))set_calculationMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  calculationMode){
        weakSelf.calculationMode = calculationMode;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSArray *  tensionValues))set_tensionValues{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  tensionValues){
        weakSelf.tensionValues = tensionValues;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSArray *  continuityValues))set_continuityValues{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  continuityValues){
        weakSelf.continuityValues = continuityValues;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSArray *  biasValues))set_biasValues{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  biasValues){
        weakSelf.biasValues = biasValues;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSString *  rotationMode))set_rotationMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  rotationMode){
        weakSelf.rotationMode = rotationMode;
        return weakSelf;
    };
}





//superclass pros CAPropertyAnimation
-(CAKeyframeAnimation  *(^)(NSString *  keyPath))set_keyPath{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  keyPath){
        weakSelf.keyPath = keyPath;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(BOOL  additive))set_additive{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  additive){
        weakSelf.additive = additive;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(BOOL  cumulative))set_cumulative{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  cumulative){
        weakSelf.cumulative = cumulative;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(CAValueFunction *  valueFunction))set_valueFunction{
    __weak typeof(self) weakSelf = self;
    return ^(CAValueFunction *  valueFunction){
        weakSelf.valueFunction = valueFunction;
        return weakSelf;
    };
}

//superclass pros CAAnimation
-(CAKeyframeAnimation  *(^)(CAMediaTimingFunction *  timingFunction))set_timingFunction{
    __weak typeof(self) weakSelf = self;
    return ^(CAMediaTimingFunction *  timingFunction){
        weakSelf.timingFunction = timingFunction;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(double  beginTime))set_beginTime{
    __weak typeof(self) weakSelf = self;
    return ^(double  beginTime){
        weakSelf.beginTime = beginTime;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(double  duration))set_duration{
    __weak typeof(self) weakSelf = self;
    return ^(double  duration){
        weakSelf.duration = duration;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(float  speed))set_speed{
    __weak typeof(self) weakSelf = self;
    return ^(float  speed){
        weakSelf.speed = speed;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(double  timeOffset))set_timeOffset{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeOffset){
        weakSelf.timeOffset = timeOffset;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(float  repeatCount))set_repeatCount{
    __weak typeof(self) weakSelf = self;
    return ^(float  repeatCount){
        weakSelf.repeatCount = repeatCount;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(double  repeatDuration))set_repeatDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  repeatDuration){
        weakSelf.repeatDuration = repeatDuration;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(BOOL  autoreverses))set_autoreverses{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  autoreverses){
        weakSelf.autoreverses = autoreverses;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSString *  fillMode))set_fillMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  fillMode){
        weakSelf.fillMode = fillMode;
        return weakSelf;
    };
}

//superclass pros NSObject
-(CAKeyframeAnimation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(CAKeyframeAnimation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end