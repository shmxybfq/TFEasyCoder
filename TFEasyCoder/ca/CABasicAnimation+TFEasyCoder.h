//
//  CABasicAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CABasicAnimation (TFEasyCoder)










//superclass pros CAPropertyAnimation
-(CABasicAnimation  *(^)(NSString *  keyPath))set_keyPath;
-(CABasicAnimation  *(^)(BOOL  additive))set_additive;
-(CABasicAnimation  *(^)(BOOL  cumulative))set_cumulative;
-(CABasicAnimation  *(^)(CAValueFunction *  valueFunction))set_valueFunction;
//superclass pros CAAnimation
-(CABasicAnimation  *(^)(CAMediaTimingFunction *  timingFunction))set_timingFunction;
-(CABasicAnimation  *(^)(double  beginTime))set_beginTime;
-(CABasicAnimation  *(^)(double  duration))set_duration;
-(CABasicAnimation  *(^)(float  speed))set_speed;
-(CABasicAnimation  *(^)(double  timeOffset))set_timeOffset;
-(CABasicAnimation  *(^)(float  repeatCount))set_repeatCount;
-(CABasicAnimation  *(^)(double  repeatDuration))set_repeatDuration;
-(CABasicAnimation  *(^)(BOOL  autoreverses))set_autoreverses;
-(CABasicAnimation  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CABasicAnimation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CABasicAnimation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CABasicAnimation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CABasicAnimation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CABasicAnimation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CABasicAnimation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CABasicAnimation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CABasicAnimation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CABasicAnimation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CABasicAnimation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CABasicAnimation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CABasicAnimation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CABasicAnimation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CABasicAnimation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end