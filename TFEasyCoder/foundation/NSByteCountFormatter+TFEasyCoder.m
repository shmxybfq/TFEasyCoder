//
//  NSByteCountFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSByteCountFormatter+TFEasyCoder.h"


@implementation NSByteCountFormatter (TFEasyCoder)





-(NSByteCountFormatter  *(^)(unsigned long long  allowedUnits))set_allowedUnits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  allowedUnits){
        weakSelf.allowedUnits = allowedUnits;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(long long  countStyle))set_countStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  countStyle){
        weakSelf.countStyle = countStyle;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  allowsNonnumericFormatting))set_allowsNonnumericFormatting{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsNonnumericFormatting){
        weakSelf.allowsNonnumericFormatting = allowsNonnumericFormatting;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  includesUnit))set_includesUnit{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  includesUnit){
        weakSelf.includesUnit = includesUnit;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  includesCount))set_includesCount{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  includesCount){
        weakSelf.includesCount = includesCount;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  includesActualByteCount))set_includesActualByteCount{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  includesActualByteCount){
        weakSelf.includesActualByteCount = includesActualByteCount;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  adaptive))set_adaptive{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  adaptive){
        weakSelf.adaptive = adaptive;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  zeroPadsFractionDigits))set_zeroPadsFractionDigits{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  zeroPadsFractionDigits){
        weakSelf.zeroPadsFractionDigits = zeroPadsFractionDigits;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(long long  formattingContext))set_formattingContext{
    __weak typeof(self) weakSelf = self;
    return ^(long long  formattingContext){
        weakSelf.formattingContext = formattingContext;
        return weakSelf;
    };
}





//superclass pros NSFormatter
//superclass pros NSObject
-(NSByteCountFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSByteCountFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end