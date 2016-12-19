//
//  UIPinchGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPinchGestureRecognizer+TFEasyCoder.h"


@implementation UIPinchGestureRecognizer (TFEasyCoder)





-(UIPinchGestureRecognizer  *(^)(double  scale))set_scale{
    __weak typeof(self) weakSelf = self;
    return ^(double  scale){
        weakSelf.scale = scale;
        return weakSelf;
    };
}






//superclass pros UIGestureRecognizer
-(UIPinchGestureRecognizer  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  cancelsTouchesInView){
        weakSelf.cancelsTouchesInView = cancelsTouchesInView;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysTouchesBegan){
        weakSelf.delaysTouchesBegan = delaysTouchesBegan;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysTouchesEnded){
        weakSelf.delaysTouchesEnded = delaysTouchesEnded;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  allowedTouchTypes){
        weakSelf.allowedTouchTypes = allowedTouchTypes;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  allowedPressTypes){
        weakSelf.allowedPressTypes = allowedPressTypes;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIPinchGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIPinchGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end