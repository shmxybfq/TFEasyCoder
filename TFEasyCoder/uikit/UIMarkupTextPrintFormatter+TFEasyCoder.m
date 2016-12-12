//
//  UIMarkupTextPrintFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMarkupTextPrintFormatter+TFEasyCoder.h"


@implementation UIMarkupTextPrintFormatter (TFEasyCoder)





-(UIMarkupTextPrintFormatter  *(^)(NSString *  markupText))set_markupText{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  markupText){
        weakSelf.markupText = markupText;
        return weakSelf;
    };
}





//superclass pros UIPrintFormatter
-(UIMarkupTextPrintFormatter  *(^)(double  maximumContentHeight))set_maximumContentHeight{
    __weak typeof(self) weakSelf = self;
    return ^(double  maximumContentHeight){
        weakSelf.maximumContentHeight = maximumContentHeight;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(double  maximumContentWidth))set_maximumContentWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  maximumContentWidth){
        weakSelf.maximumContentWidth = maximumContentWidth;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(UIEdgeInsets  contentInsets))set_contentInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  contentInsets){
        weakSelf.contentInsets = contentInsets;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(UIEdgeInsets  perPageContentInsets))set_perPageContentInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  perPageContentInsets){
        weakSelf.perPageContentInsets = perPageContentInsets;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(long long  startPage))set_startPage{
    __weak typeof(self) weakSelf = self;
    return ^(long long  startPage){
        weakSelf.startPage = startPage;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIMarkupTextPrintFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIMarkupTextPrintFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end