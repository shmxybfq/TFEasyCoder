//
//  NSTextContainer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTextContainer+TFEasyCoder.h"


@implementation NSTextContainer (TFEasyCoder)





-(NSTextContainer  *(^)(NSLayoutManager *  layoutManager))set_layoutManager{
    __weak typeof(self) weakSelf = self;
    return ^(NSLayoutManager *  layoutManager){
        weakSelf.layoutManager = layoutManager;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(CGSize  size))set_size{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  size){
        weakSelf.size = size;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(NSArray *  exclusionPaths))set_exclusionPaths{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  exclusionPaths){
        weakSelf.exclusionPaths = exclusionPaths;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(long long  lineBreakMode))set_lineBreakMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  lineBreakMode){
        weakSelf.lineBreakMode = lineBreakMode;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(double  lineFragmentPadding))set_lineFragmentPadding{
    __weak typeof(self) weakSelf = self;
    return ^(double  lineFragmentPadding){
        weakSelf.lineFragmentPadding = lineFragmentPadding;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(unsigned long long  maximumNumberOfLines))set_maximumNumberOfLines{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  maximumNumberOfLines){
        weakSelf.maximumNumberOfLines = maximumNumberOfLines;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(BOOL  widthTracksTextView))set_widthTracksTextView{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  widthTracksTextView){
        weakSelf.widthTracksTextView = widthTracksTextView;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(BOOL  heightTracksTextView))set_heightTracksTextView{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  heightTracksTextView){
        weakSelf.heightTracksTextView = heightTracksTextView;
        return weakSelf;
    };
}





//superclass pros NSObject
-(NSTextContainer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSTextContainer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end