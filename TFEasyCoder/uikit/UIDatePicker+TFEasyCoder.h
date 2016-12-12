//
//  UIDatePicker+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIDatePicker (TFEasyCoder)





-(UIDatePicker  *(^)(UIColor *  tintColor))set_tintColor;
-(UIDatePicker  *(^)(double  minuteInterval))set_minuteInterval;
-(UIDatePicker  *(^)(long long  datePickerMode))set_datePickerMode;
-(UIDatePicker  *(^)(NSLocale *  locale))set_locale;
-(UIDatePicker  *(^)(NSCalendar *  calendar))set_calendar;
-(UIDatePicker  *(^)(NSTimeZone *  timeZone))set_timeZone;
-(UIDatePicker  *(^)(NSDate *  date))set_date;
-(UIDatePicker  *(^)(NSDate *  minimumDate))set_minimumDate;
-(UIDatePicker  *(^)(NSDate *  maximumDate))set_maximumDate;
-(UIDatePicker  *(^)(double  countDownDuration))set_countDownDuration;





//superclass pros UIControl
-(UIDatePicker  *(^)(BOOL  enabled))set_enabled;
-(UIDatePicker  *(^)(BOOL  selected))set_selected;
-(UIDatePicker  *(^)(BOOL  highlighted))set_highlighted;
-(UIDatePicker  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UIDatePicker  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;
//superclass pros UIView
-(UIDatePicker  *(^)(UIView *  maskView))set_maskView;
-(UIDatePicker  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIDatePicker  *(^)(long long  tag))set_tag;
-(UIDatePicker  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIDatePicker  *(^)(CGPoint  center))set_center;
-(UIDatePicker  *(^)(CGRect  frame))set_frame;
-(UIDatePicker  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIDatePicker  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIDatePicker  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDatePicker  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDatePicker  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDatePicker  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDatePicker  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDatePicker  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDatePicker  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDatePicker  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDatePicker  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDatePicker  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDatePicker  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDatePicker  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDatePicker  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDatePicker  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
