//
//  NSDateIntervalFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDateIntervalFormatter (TFEasyCoder)





-(NSDateIntervalFormatter  *(^)(NSLocale *  locale))set_locale;
-(NSDateIntervalFormatter  *(^)(NSCalendar *  calendar))set_calendar;
-(NSDateIntervalFormatter  *(^)(NSTimeZone *  timeZone))set_timeZone;
-(NSDateIntervalFormatter  *(^)(NSString *  dateTemplate))set_dateTemplate;
-(NSDateIntervalFormatter  *(^)(unsigned long long  dateStyle))set_dateStyle;
-(NSDateIntervalFormatter  *(^)(unsigned long long  timeStyle))set_timeStyle;




//superclass pros NSFormatter
//superclass pros NSObject
-(NSDateIntervalFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDateIntervalFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDateIntervalFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDateIntervalFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDateIntervalFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDateIntervalFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDateIntervalFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDateIntervalFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDateIntervalFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDateIntervalFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDateIntervalFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDateIntervalFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDateIntervalFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDateIntervalFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end