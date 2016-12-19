//
//  UIPopoverPresentationController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPopoverPresentationController+TFEasyCoder.h"


@implementation UIPopoverPresentationController (TFEasyCoder)





-(UIPopoverPresentationController  *(^)(id<UIPopoverPresentationControllerDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIPopoverPresentationControllerDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(unsigned long long  permittedArrowDirections))set_permittedArrowDirections{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  permittedArrowDirections){
        weakSelf.permittedArrowDirections = permittedArrowDirections;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(UIView *  sourceView))set_sourceView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  sourceView){
        weakSelf.sourceView = sourceView;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(BOOL  canOverlapSourceViewRect))set_canOverlapSourceViewRect{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  canOverlapSourceViewRect){
        weakSelf.canOverlapSourceViewRect = canOverlapSourceViewRect;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(UIBarButtonItem *  barButtonItem))set_barButtonItem{
    __weak typeof(self) weakSelf = self;
    return ^(UIBarButtonItem *  barButtonItem){
        weakSelf.barButtonItem = barButtonItem;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(NSArray *  passthroughViews))set_passthroughViews{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  passthroughViews){
        weakSelf.passthroughViews = passthroughViews;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(UIEdgeInsets  popoverLayoutMargins))set_popoverLayoutMargins{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  popoverLayoutMargins){
        weakSelf.popoverLayoutMargins = popoverLayoutMargins;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(Class  popoverBackgroundViewClass))set_popoverBackgroundViewClass{
    __weak typeof(self) weakSelf = self;
    return ^(Class  popoverBackgroundViewClass){
        weakSelf.popoverBackgroundViewClass = popoverBackgroundViewClass;
        return weakSelf;
    };
}





//superclass pros UIPresentationController
//TF_EC_CHAIN_PROP_IMP(UIPopoverPresentationController ,id<UIAdaptivePresentationControllerDelegate>  ,delegate)
-(UIPopoverPresentationController  *(^)(UITraitCollection *  overrideTraitCollection))set_overrideTraitCollection{
    __weak typeof(self) weakSelf = self;
    return ^(UITraitCollection *  overrideTraitCollection){
        weakSelf.overrideTraitCollection = overrideTraitCollection;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIPopoverPresentationController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIPopoverPresentationController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end