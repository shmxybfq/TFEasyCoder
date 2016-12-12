//
//  NSLayoutManager+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLayoutManager+TFEasyCoder.h"


@implementation NSLayoutManager (TFEasyCoder)





-(NSLayoutManager  *(^)(NSTextStorage *  textStorage))set_textStorage{
    __weak typeof(self) weakSelf = self;
    return ^(NSTextStorage *  textStorage){
        weakSelf.textStorage = textStorage;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(id<NSLayoutManagerDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<NSLayoutManagerDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(BOOL  showsInvisibleCharacters))set_showsInvisibleCharacters{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsInvisibleCharacters){
        weakSelf.showsInvisibleCharacters = showsInvisibleCharacters;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(BOOL  showsControlCharacters))set_showsControlCharacters{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsControlCharacters){
        weakSelf.showsControlCharacters = showsControlCharacters;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(double  hyphenationFactor))set_hyphenationFactor{
    __weak typeof(self) weakSelf = self;
    return ^(double  hyphenationFactor){
        weakSelf.hyphenationFactor = hyphenationFactor;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(BOOL  usesFontLeading))set_usesFontLeading{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  usesFontLeading){
        weakSelf.usesFontLeading = usesFontLeading;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(BOOL  allowsNonContiguousLayout))set_allowsNonContiguousLayout{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsNonContiguousLayout){
        weakSelf.allowsNonContiguousLayout = allowsNonContiguousLayout;
        return weakSelf;
    };
}





//superclass pros NSObject
-(NSLayoutManager  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSLayoutManager  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end