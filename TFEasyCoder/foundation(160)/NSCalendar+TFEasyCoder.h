//
//  NSCalendar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSCalendar (TFEasyCoder)





-(NSCalendar  *(^)(NSLocale *  locale))set_locale;
-(NSCalendar  *(^)(NSTimeZone *  timeZone))set_timeZone;
-(NSCalendar  *(^)(unsigned long long  firstWeekday))set_firstWeekday;
-(NSCalendar  *(^)(unsigned long long  minimumDaysInFirstWeek))set_minimumDaysInFirstWeek;




//superclass pros NSObject
-(NSCalendar  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSCalendar  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSCalendar  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSCalendar  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSCalendar  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSCalendar  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSCalendar  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSCalendar  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSCalendar  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSCalendar  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSCalendar  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSCalendar  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSCalendar  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSCalendar  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end