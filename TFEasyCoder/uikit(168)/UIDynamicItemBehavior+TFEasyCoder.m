//
//  UIDynamicItemBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDynamicItemBehavior+TFEasyCoder.h"


@implementation UIDynamicItemBehavior (TFEasyCoder)





-(UIDynamicItemBehavior  *(^)(double  elasticity))set_elasticity{
    __weak typeof(self) weakSelf = self;
    return ^(double  elasticity){
        weakSelf.elasticity = elasticity;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(double  friction))set_friction{
    __weak typeof(self) weakSelf = self;
    return ^(double  friction){
        weakSelf.friction = friction;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(double  density))set_density{
    __weak typeof(self) weakSelf = self;
    return ^(double  density){
        weakSelf.density = density;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(double  resistance))set_resistance{
    __weak typeof(self) weakSelf = self;
    return ^(double  resistance){
        weakSelf.resistance = resistance;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(double  charge))set_charge{
    __weak typeof(self) weakSelf = self;
    return ^(double  charge){
        weakSelf.charge = charge;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(BOOL  anchored))set_anchored{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  anchored){
        weakSelf.anchored = anchored;
        return weakSelf;
    };
}





//superclass pros UIDynamicBehavior
//superclass pros NSObject
-(UIDynamicItemBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIDynamicItemBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end