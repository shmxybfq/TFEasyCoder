//
//  UISwipeGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISwipeGestureRecognizer+TFEasyCoder.h"


@implementation UISwipeGestureRecognizer (TFEasyCoder)





-(UISwipeGestureRecognizer  *(^)(unsigned long long  direction))set_direction{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  direction){
        weakSelf.direction = direction;
        return weakSelf;
    };
}






//superclass pros UIGestureRecognizer
-(UISwipeGestureRecognizer  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  cancelsTouchesInView){
        weakSelf.cancelsTouchesInView = cancelsTouchesInView;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysTouchesBegan){
        weakSelf.delaysTouchesBegan = delaysTouchesBegan;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysTouchesEnded){
        weakSelf.delaysTouchesEnded = delaysTouchesEnded;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  allowedTouchTypes){
        weakSelf.allowedTouchTypes = allowedTouchTypes;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  allowedPressTypes){
        weakSelf.allowedPressTypes = allowedPressTypes;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UISwipeGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UISwipeGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end