//
//  UIPopoverController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPopoverController+TFEasyCoder.h"


@implementation UIPopoverController (TFEasyCoder)





-(UIPopoverController  *(^)(id<UIPopoverControllerDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIPopoverControllerDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(UIViewController *  contentViewController))set_contentViewController{
    __weak typeof(self) weakSelf = self;
    return ^(UIViewController *  contentViewController){
        weakSelf.contentViewController = contentViewController;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(CGSize  popoverContentSize))set_popoverContentSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  popoverContentSize){
        weakSelf.popoverContentSize = popoverContentSize;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(NSArray *  passthroughViews))set_passthroughViews{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  passthroughViews){
        weakSelf.passthroughViews = passthroughViews;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(UIEdgeInsets  popoverLayoutMargins))set_popoverLayoutMargins{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  popoverLayoutMargins){
        weakSelf.popoverLayoutMargins = popoverLayoutMargins;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(Class  popoverBackgroundViewClass))set_popoverBackgroundViewClass{
    __weak typeof(self) weakSelf = self;
    return ^(Class  popoverBackgroundViewClass){
        weakSelf.popoverBackgroundViewClass = popoverBackgroundViewClass;
        return weakSelf;
    };
}





//superclass pros NSObject
-(UIPopoverController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIPopoverController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end