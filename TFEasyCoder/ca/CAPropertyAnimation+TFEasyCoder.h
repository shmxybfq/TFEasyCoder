//
//  CAPropertyAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAPropertyAnimation (TFEasyCoder)





-(CAPropertyAnimation  *(^)(NSString *  keyPath))set_keyPath;
-(CAPropertyAnimation  *(^)(BOOL  additive))set_additive;
-(CAPropertyAnimation  *(^)(BOOL  cumulative))set_cumulative;
-(CAPropertyAnimation  *(^)(CAValueFunction *  valueFunction))set_valueFunction;




//superclass pros CAAnimation
-(CAPropertyAnimation  *(^)(CAMediaTimingFunction *  timingFunction))set_timingFunction;
-(CAPropertyAnimation  *(^)(double  beginTime))set_beginTime;
-(CAPropertyAnimation  *(^)(double  duration))set_duration;
-(CAPropertyAnimation  *(^)(float  speed))set_speed;
-(CAPropertyAnimation  *(^)(double  timeOffset))set_timeOffset;
-(CAPropertyAnimation  *(^)(float  repeatCount))set_repeatCount;
-(CAPropertyAnimation  *(^)(double  repeatDuration))set_repeatDuration;
-(CAPropertyAnimation  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAPropertyAnimation  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CAPropertyAnimation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAPropertyAnimation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAPropertyAnimation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAPropertyAnimation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAPropertyAnimation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAPropertyAnimation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAPropertyAnimation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAPropertyAnimation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAPropertyAnimation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAPropertyAnimation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAPropertyAnimation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAPropertyAnimation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAPropertyAnimation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAPropertyAnimation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end