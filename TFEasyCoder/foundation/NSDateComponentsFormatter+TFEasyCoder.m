//
//  NSDateComponentsFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDateComponentsFormatter+TFEasyCoder.h"


@implementation NSDateComponentsFormatter (TFEasyCoder)





-(NSDateComponentsFormatter  *(^)(long long  unitsStyle))set_unitsStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  unitsStyle){
        weakSelf.unitsStyle = unitsStyle;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(unsigned long long  allowedUnits))set_allowedUnits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  allowedUnits){
        weakSelf.allowedUnits = allowedUnits;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(unsigned long long  zeroFormattingBehavior))set_zeroFormattingBehavior{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  zeroFormattingBehavior){
        weakSelf.zeroFormattingBehavior = zeroFormattingBehavior;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(NSCalendar *  calendar))set_calendar{
    __weak typeof(self) weakSelf = self;
    return ^(NSCalendar *  calendar){
        weakSelf.calendar = calendar;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(BOOL  allowsFractionalUnits))set_allowsFractionalUnits{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsFractionalUnits){
        weakSelf.allowsFractionalUnits = allowsFractionalUnits;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(long long  maximumUnitCount))set_maximumUnitCount{
    __weak typeof(self) weakSelf = self;
    return ^(long long  maximumUnitCount){
        weakSelf.maximumUnitCount = maximumUnitCount;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(BOOL  collapsesLargestUnit))set_collapsesLargestUnit{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  collapsesLargestUnit){
        weakSelf.collapsesLargestUnit = collapsesLargestUnit;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(BOOL  includesApproximationPhrase))set_includesApproximationPhrase{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  includesApproximationPhrase){
        weakSelf.includesApproximationPhrase = includesApproximationPhrase;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(BOOL  includesTimeRemainingPhrase))set_includesTimeRemainingPhrase{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  includesTimeRemainingPhrase){
        weakSelf.includesTimeRemainingPhrase = includesTimeRemainingPhrase;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(long long  formattingContext))set_formattingContext{
    __weak typeof(self) weakSelf = self;
    return ^(long long  formattingContext){
        weakSelf.formattingContext = formattingContext;
        return weakSelf;
    };
}





//superclass pros NSFormatter
//superclass pros NSObject
-(NSDateComponentsFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSDateComponentsFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end