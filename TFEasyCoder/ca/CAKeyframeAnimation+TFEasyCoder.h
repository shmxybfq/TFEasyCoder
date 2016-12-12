//
//  CAKeyframeAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAKeyframeAnimation (TFEasyCoder)





-(CAKeyframeAnimation  *(^)(NSArray *  values))set_values;
-(CAKeyframeAnimation  *(^)(CGPathRef  path))set_path;
-(CAKeyframeAnimation  *(^)(NSArray *  keyTimes))set_keyTimes;
-(CAKeyframeAnimation  *(^)(NSArray *  timingFunctions))set_timingFunctions;
-(CAKeyframeAnimation  *(^)(NSString *  calculationMode))set_calculationMode;
-(CAKeyframeAnimation  *(^)(NSArray *  tensionValues))set_tensionValues;
-(CAKeyframeAnimation  *(^)(NSArray *  continuityValues))set_continuityValues;
-(CAKeyframeAnimation  *(^)(NSArray *  biasValues))set_biasValues;
-(CAKeyframeAnimation  *(^)(NSString *  rotationMode))set_rotationMode;




//superclass pros CAPropertyAnimation
-(CAKeyframeAnimation  *(^)(NSString *  keyPath))set_keyPath;
-(CAKeyframeAnimation  *(^)(BOOL  additive))set_additive;
-(CAKeyframeAnimation  *(^)(BOOL  cumulative))set_cumulative;
-(CAKeyframeAnimation  *(^)(CAValueFunction *  valueFunction))set_valueFunction;
//superclass pros CAAnimation
-(CAKeyframeAnimation  *(^)(CAMediaTimingFunction *  timingFunction))set_timingFunction;
-(CAKeyframeAnimation  *(^)(double  beginTime))set_beginTime;
-(CAKeyframeAnimation  *(^)(double  duration))set_duration;
-(CAKeyframeAnimation  *(^)(float  speed))set_speed;
-(CAKeyframeAnimation  *(^)(double  timeOffset))set_timeOffset;
-(CAKeyframeAnimation  *(^)(float  repeatCount))set_repeatCount;
-(CAKeyframeAnimation  *(^)(double  repeatDuration))set_repeatDuration;
-(CAKeyframeAnimation  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAKeyframeAnimation  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CAKeyframeAnimation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAKeyframeAnimation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAKeyframeAnimation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAKeyframeAnimation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAKeyframeAnimation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAKeyframeAnimation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAKeyframeAnimation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAKeyframeAnimation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAKeyframeAnimation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAKeyframeAnimation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAKeyframeAnimation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAKeyframeAnimation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAKeyframeAnimation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAKeyframeAnimation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end