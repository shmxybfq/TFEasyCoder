//
//  UITapGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITapGestureRecognizer+TFEasyCoder.h"


@implementation UITapGestureRecognizer (TFEasyCoder)





-(UITapGestureRecognizer  *(^)(unsigned long long  numberOfTapsRequired))set_numberOfTapsRequired{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  numberOfTapsRequired){
        weakSelf.numberOfTapsRequired = numberOfTapsRequired;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(unsigned long long  numberOfTouchesRequired))set_numberOfTouchesRequired{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  numberOfTouchesRequired){
        weakSelf.numberOfTouchesRequired = numberOfTouchesRequired;
        return weakSelf;
    };
}





//superclass pros UIGestureRecognizer
-(UITapGestureRecognizer  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  cancelsTouchesInView){
        weakSelf.cancelsTouchesInView = cancelsTouchesInView;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysTouchesBegan){
        weakSelf.delaysTouchesBegan = delaysTouchesBegan;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysTouchesEnded){
        weakSelf.delaysTouchesEnded = delaysTouchesEnded;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  allowedTouchTypes){
        weakSelf.allowedTouchTypes = allowedTouchTypes;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  allowedPressTypes){
        weakSelf.allowedPressTypes = allowedPressTypes;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UITapGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UITapGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end