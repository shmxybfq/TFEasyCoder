//
//  UINavigationItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UINavigationItem+TFEasyCoder.h"


@implementation UINavigationItem (TFEasyCoder)





-(UINavigationItem  *(^)(NSString *  title))set_title{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  title){
        weakSelf.title = title;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(UIView *  titleView))set_titleView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  titleView){
        weakSelf.titleView = titleView;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(NSString *  prompt))set_prompt{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  prompt){
        weakSelf.prompt = prompt;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(UIBarButtonItem *  backBarButtonItem))set_backBarButtonItem{
    __weak typeof(self) weakSelf = self;
    return ^(UIBarButtonItem *  backBarButtonItem){
        weakSelf.backBarButtonItem = backBarButtonItem;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(BOOL  hidesBackButton))set_hidesBackButton{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidesBackButton){
        weakSelf.hidesBackButton = hidesBackButton;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(NSArray *  leftBarButtonItems))set_leftBarButtonItems{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  leftBarButtonItems){
        weakSelf.leftBarButtonItems = leftBarButtonItems;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(NSArray *  rightBarButtonItems))set_rightBarButtonItems{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  rightBarButtonItems){
        weakSelf.rightBarButtonItems = rightBarButtonItems;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(BOOL  leftItemsSupplementBackButton))set_leftItemsSupplementBackButton{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  leftItemsSupplementBackButton){
        weakSelf.leftItemsSupplementBackButton = leftItemsSupplementBackButton;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(UIBarButtonItem *  leftBarButtonItem))set_leftBarButtonItem{
    __weak typeof(self) weakSelf = self;
    return ^(UIBarButtonItem *  leftBarButtonItem){
        weakSelf.leftBarButtonItem = leftBarButtonItem;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(UIBarButtonItem *  rightBarButtonItem))set_rightBarButtonItem{
    __weak typeof(self) weakSelf = self;
    return ^(UIBarButtonItem *  rightBarButtonItem){
        weakSelf.rightBarButtonItem = rightBarButtonItem;
        return weakSelf;
    };
}





//superclass pros NSObject
-(UINavigationItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UINavigationItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end