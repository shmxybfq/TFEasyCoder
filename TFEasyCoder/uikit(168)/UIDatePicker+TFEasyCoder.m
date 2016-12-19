//
//  UIDatePicker+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDatePicker+TFEasyCoder.h"


@implementation UIDatePicker (TFEasyCoder)






-(UIDatePicker  *(^)(UIColor *  tintColor))set_tintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  tintColor){
        weakSelf.tintColor = tintColor;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(double  minuteInterval))set_minuteInterval{
    __weak typeof(self) weakSelf = self;
    return ^(double  minuteInterval){
        weakSelf.minuteInterval = minuteInterval;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(long long  datePickerMode))set_datePickerMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  datePickerMode){
        weakSelf.datePickerMode = datePickerMode;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSLocale *  locale))set_locale{
    __weak typeof(self) weakSelf = self;
    return ^(NSLocale *  locale){
        weakSelf.locale = locale;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSCalendar *  calendar))set_calendar{
    __weak typeof(self) weakSelf = self;
    return ^(NSCalendar *  calendar){
        weakSelf.calendar = calendar;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSTimeZone *  timeZone))set_timeZone{
    __weak typeof(self) weakSelf = self;
    return ^(NSTimeZone *  timeZone){
        weakSelf.timeZone = timeZone;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSDate *  date))set_date{
    __weak typeof(self) weakSelf = self;
    return ^(NSDate *  date){
        weakSelf.date = date;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSDate *  minimumDate))set_minimumDate{
    __weak typeof(self) weakSelf = self;
    return ^(NSDate *  minimumDate){
        weakSelf.minimumDate = minimumDate;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSDate *  maximumDate))set_maximumDate{
    __weak typeof(self) weakSelf = self;
    return ^(NSDate *  maximumDate){
        weakSelf.maximumDate = maximumDate;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(double  countDownDuration))set_countDownDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  countDownDuration){
        weakSelf.countDownDuration = countDownDuration;
        return weakSelf;
    };
}





//superclass pros UIControl
-(UIDatePicker  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(BOOL  selected))set_selected{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  selected){
        weakSelf.selected = selected;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(BOOL  highlighted))set_highlighted{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  highlighted){
        weakSelf.highlighted = highlighted;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  contentVerticalAlignment){
        weakSelf.contentVerticalAlignment = contentVerticalAlignment;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  contentHorizontalAlignment){
        weakSelf.contentHorizontalAlignment = contentHorizontalAlignment;
        return weakSelf;
    };
}

//superclass pros UIView
-(UIDatePicker  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UIDatePicker  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIDatePicker  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIDatePicker  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
