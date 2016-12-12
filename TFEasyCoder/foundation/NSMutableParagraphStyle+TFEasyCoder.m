//
//  NSMutableParagraphStyle+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableParagraphStyle+TFEasyCoder.h"


@implementation NSMutableParagraphStyle (TFEasyCoder)





-(NSMutableParagraphStyle  *(^)(double  lineSpacing))set_lineSpacing{
    __weak typeof(self) weakSelf = self;
    return ^(double  lineSpacing){
        weakSelf.lineSpacing = lineSpacing;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(double  paragraphSpacing))set_paragraphSpacing{
    __weak typeof(self) weakSelf = self;
    return ^(double  paragraphSpacing){
        weakSelf.paragraphSpacing = paragraphSpacing;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(long long  alignment))set_alignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  alignment){
        weakSelf.alignment = alignment;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(double  firstLineHeadIndent))set_firstLineHeadIndent{
    __weak typeof(self) weakSelf = self;
    return ^(double  firstLineHeadIndent){
        weakSelf.firstLineHeadIndent = firstLineHeadIndent;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(double  headIndent))set_headIndent{
    __weak typeof(self) weakSelf = self;
    return ^(double  headIndent){
        weakSelf.headIndent = headIndent;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(double  tailIndent))set_tailIndent{
    __weak typeof(self) weakSelf = self;
    return ^(double  tailIndent){
        weakSelf.tailIndent = tailIndent;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(long long  lineBreakMode))set_lineBreakMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  lineBreakMode){
        weakSelf.lineBreakMode = lineBreakMode;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(double  minimumLineHeight))set_minimumLineHeight{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumLineHeight){
        weakSelf.minimumLineHeight = minimumLineHeight;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(double  maximumLineHeight))set_maximumLineHeight{
    __weak typeof(self) weakSelf = self;
    return ^(double  maximumLineHeight){
        weakSelf.maximumLineHeight = maximumLineHeight;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(long long  baseWritingDirection))set_baseWritingDirection{
    __weak typeof(self) weakSelf = self;
    return ^(long long  baseWritingDirection){
        weakSelf.baseWritingDirection = baseWritingDirection;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(double  lineHeightMultiple))set_lineHeightMultiple{
    __weak typeof(self) weakSelf = self;
    return ^(double  lineHeightMultiple){
        weakSelf.lineHeightMultiple = lineHeightMultiple;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(double  paragraphSpacingBefore))set_paragraphSpacingBefore{
    __weak typeof(self) weakSelf = self;
    return ^(double  paragraphSpacingBefore){
        weakSelf.paragraphSpacingBefore = paragraphSpacingBefore;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(float  hyphenationFactor))set_hyphenationFactor{
    __weak typeof(self) weakSelf = self;
    return ^(float  hyphenationFactor){
        weakSelf.hyphenationFactor = hyphenationFactor;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(NSArray *  tabStops))set_tabStops{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  tabStops){
        weakSelf.tabStops = tabStops;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(double  defaultTabInterval))set_defaultTabInterval{
    __weak typeof(self) weakSelf = self;
    return ^(double  defaultTabInterval){
        weakSelf.defaultTabInterval = defaultTabInterval;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(BOOL  allowsDefaultTighteningForTruncation))set_allowsDefaultTighteningForTruncation{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsDefaultTighteningForTruncation){
        weakSelf.allowsDefaultTighteningForTruncation = allowsDefaultTighteningForTruncation;
        return weakSelf;
    };
}





//superclass pros NSParagraphStyle
//superclass pros NSObject
-(NSMutableParagraphStyle  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSMutableParagraphStyle  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end