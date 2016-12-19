//
//  UISimpleTextPrintFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISimpleTextPrintFormatter+TFEasyCoder.h"


@implementation UISimpleTextPrintFormatter (TFEasyCoder)





-(UISimpleTextPrintFormatter  *(^)(NSString *  text))set_text{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  text){
        weakSelf.text = text;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(NSAttributedString *  attributedText))set_attributedText{
    __weak typeof(self) weakSelf = self;
    return ^(NSAttributedString *  attributedText){
        weakSelf.attributedText = attributedText;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(UIFont *  font))set_font{
    __weak typeof(self) weakSelf = self;
    return ^(UIFont *  font){
        weakSelf.font = font;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(UIColor *  color))set_color{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  color){
        weakSelf.color = color;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(long long  textAlignment))set_textAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  textAlignment){
        weakSelf.textAlignment = textAlignment;
        return weakSelf;
    };
}





//superclass pros UIPrintFormatter
-(UISimpleTextPrintFormatter  *(^)(double  maximumContentHeight))set_maximumContentHeight{
    __weak typeof(self) weakSelf = self;
    return ^(double  maximumContentHeight){
        weakSelf.maximumContentHeight = maximumContentHeight;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(double  maximumContentWidth))set_maximumContentWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  maximumContentWidth){
        weakSelf.maximumContentWidth = maximumContentWidth;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(UIEdgeInsets  contentInsets))set_contentInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  contentInsets){
        weakSelf.contentInsets = contentInsets;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(UIEdgeInsets  perPageContentInsets))set_perPageContentInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  perPageContentInsets){
        weakSelf.perPageContentInsets = perPageContentInsets;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(long long  startPage))set_startPage{
    __weak typeof(self) weakSelf = self;
    return ^(long long  startPage){
        weakSelf.startPage = startPage;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UISimpleTextPrintFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UISimpleTextPrintFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end