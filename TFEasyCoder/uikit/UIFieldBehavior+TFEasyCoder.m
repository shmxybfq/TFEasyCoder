//
//  UIFieldBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIFieldBehavior+TFEasyCoder.h"


@implementation UIFieldBehavior (TFEasyCoder)





-(UIFieldBehavior  *(^)(CGPoint  position))set_position{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  position){
        weakSelf.position = position;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(double  strength))set_strength{
    __weak typeof(self) weakSelf = self;
    return ^(double  strength){
        weakSelf.strength = strength;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(double  falloff))set_falloff{
    __weak typeof(self) weakSelf = self;
    return ^(double  falloff){
        weakSelf.falloff = falloff;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(double  minimumRadius))set_minimumRadius{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumRadius){
        weakSelf.minimumRadius = minimumRadius;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(CGVector  direction))set_direction{
    __weak typeof(self) weakSelf = self;
    return ^(CGVector  direction){
        weakSelf.direction = direction;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(double  smoothness))set_smoothness{
    __weak typeof(self) weakSelf = self;
    return ^(double  smoothness){
        weakSelf.smoothness = smoothness;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(double  animationSpeed))set_animationSpeed{
    __weak typeof(self) weakSelf = self;
    return ^(double  animationSpeed){
        weakSelf.animationSpeed = animationSpeed;
        return weakSelf;
    };
}





//superclass pros UIDynamicBehavior
//superclass pros NSObject
-(UIFieldBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIFieldBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end