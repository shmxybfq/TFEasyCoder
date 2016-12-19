//
//  UILongPressGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILongPressGestureRecognizer+TFEasyCoder.h"


@implementation UILongPressGestureRecognizer (TFEasyCoder)





-(UILongPressGestureRecognizer  *(^)(unsigned long long  numberOfTapsRequired))set_numberOfTapsRequired{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  numberOfTapsRequired){
        weakSelf.numberOfTapsRequired = numberOfTapsRequired;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(double  minimumPressDuration))set_minimumPressDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumPressDuration){
        weakSelf.minimumPressDuration = minimumPressDuration;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(double  allowableMovement))set_allowableMovement{
    __weak typeof(self) weakSelf = self;
    return ^(double  allowableMovement){
        weakSelf.allowableMovement = allowableMovement;
        return weakSelf;
    };
}






//superclass pros UIGestureRecognizer
-(UILongPressGestureRecognizer  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  cancelsTouchesInView){
        weakSelf.cancelsTouchesInView = cancelsTouchesInView;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysTouchesBegan){
        weakSelf.delaysTouchesBegan = delaysTouchesBegan;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysTouchesEnded){
        weakSelf.delaysTouchesEnded = delaysTouchesEnded;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  allowedTouchTypes){
        weakSelf.allowedTouchTypes = allowedTouchTypes;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  allowedPressTypes){
        weakSelf.allowedPressTypes = allowedPressTypes;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UILongPressGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UILongPressGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end