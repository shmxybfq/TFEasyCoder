//
//  NSDateIntervalFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDateIntervalFormatter+TFEasyCoder.h"


@implementation NSDateIntervalFormatter (TFEasyCoder)





-(NSDateIntervalFormatter  *(^)(NSLocale *  locale))set_locale{
    __weak typeof(self) weakSelf = self;
    return ^(NSLocale *  locale){
        weakSelf.locale = locale;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(NSCalendar *  calendar))set_calendar{
    __weak typeof(self) weakSelf = self;
    return ^(NSCalendar *  calendar){
        weakSelf.calendar = calendar;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(NSTimeZone *  timeZone))set_timeZone{
    __weak typeof(self) weakSelf = self;
    return ^(NSTimeZone *  timeZone){
        weakSelf.timeZone = timeZone;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(NSString *  dateTemplate))set_dateTemplate{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  dateTemplate){
        weakSelf.dateTemplate = dateTemplate;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(unsigned long long  dateStyle))set_dateStyle{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  dateStyle){
        weakSelf.dateStyle = dateStyle;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(unsigned long long  timeStyle))set_timeStyle{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  timeStyle){
        weakSelf.timeStyle = timeStyle;
        return weakSelf;
    };
}





//superclass pros NSFormatter
//superclass pros NSObject
-(NSDateIntervalFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSDateIntervalFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end