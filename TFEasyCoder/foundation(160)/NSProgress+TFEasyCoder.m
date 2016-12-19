//
//  NSProgress+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSProgress+TFEasyCoder.h"


@implementation NSProgress (TFEasyCoder)






-(NSProgress  *(^)(long long  totalUnitCount))set_totalUnitCount{
    __weak typeof(self) weakSelf = self;
    return ^(long long  totalUnitCount){
        weakSelf.totalUnitCount = totalUnitCount;
        return weakSelf;
    };
}

-(NSProgress  *(^)(long long  completedUnitCount))set_completedUnitCount{
    __weak typeof(self) weakSelf = self;
    return ^(long long  completedUnitCount){
        weakSelf.completedUnitCount = completedUnitCount;
        return weakSelf;
    };
}

-(NSProgress  *(^)(NSString *  localizedDescription))set_localizedDescription{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  localizedDescription){
        weakSelf.localizedDescription = localizedDescription;
        return weakSelf;
    };
}

-(NSProgress  *(^)(NSString *  localizedAdditionalDescription))set_localizedAdditionalDescription{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  localizedAdditionalDescription){
        weakSelf.localizedAdditionalDescription = localizedAdditionalDescription;
        return weakSelf;
    };
}

-(NSProgress  *(^)(BOOL  cancellable))set_cancellable{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  cancellable){
        weakSelf.cancellable = cancellable;
        return weakSelf;
    };
}

-(NSProgress  *(^)(BOOL  pausable))set_pausable{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  pausable){
        weakSelf.pausable = pausable;
        return weakSelf;
    };
}

-(NSProgress  *(^)(NSString *  kind))set_kind{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  kind){
        weakSelf.kind = kind;
        return weakSelf;
    };
}





//superclass pros NSObject
-(NSProgress  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSProgress  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSProgress  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSProgress  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSProgress  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSProgress  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSProgress  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSProgress  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSProgress  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSProgress  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSProgress  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSProgress  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSProgress  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSProgress  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end