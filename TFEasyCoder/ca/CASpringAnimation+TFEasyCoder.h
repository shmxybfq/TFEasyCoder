//
//  CASpringAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CASpringAnimation (TFEasyCoder)





-(CASpringAnimation  *(^)(double  mass))set_mass;
-(CASpringAnimation  *(^)(double  stiffness))set_stiffness;
-(CASpringAnimation  *(^)(double  damping))set_damping;
-(CASpringAnimation  *(^)(double  initialVelocity))set_initialVelocity;




//superclass pros CABasicAnimation
//superclass pros CAPropertyAnimation
-(CASpringAnimation  *(^)(NSString *  keyPath))set_keyPath;
-(CASpringAnimation  *(^)(BOOL  additive))set_additive;
-(CASpringAnimation  *(^)(BOOL  cumulative))set_cumulative;
-(CASpringAnimation  *(^)(CAValueFunction *  valueFunction))set_valueFunction;
//superclass pros CAAnimation
-(CASpringAnimation  *(^)(CAMediaTimingFunction *  timingFunction))set_timingFunction;
-(CASpringAnimation  *(^)(double  beginTime))set_beginTime;
-(CASpringAnimation  *(^)(double  duration))set_duration;
-(CASpringAnimation  *(^)(float  speed))set_speed;
-(CASpringAnimation  *(^)(double  timeOffset))set_timeOffset;
-(CASpringAnimation  *(^)(float  repeatCount))set_repeatCount;
-(CASpringAnimation  *(^)(double  repeatDuration))set_repeatDuration;
-(CASpringAnimation  *(^)(BOOL  autoreverses))set_autoreverses;
-(CASpringAnimation  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CASpringAnimation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CASpringAnimation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CASpringAnimation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CASpringAnimation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CASpringAnimation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CASpringAnimation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CASpringAnimation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CASpringAnimation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CASpringAnimation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CASpringAnimation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CASpringAnimation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CASpringAnimation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CASpringAnimation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CASpringAnimation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end