//
//  CAAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAAnimation (TFEasyCoder)






-(CAAnimation  *(^)(CAMediaTimingFunction *  timingFunction))set_timingFunction;
-(CAAnimation  *(^)(double  beginTime))set_beginTime;
-(CAAnimation  *(^)(double  duration))set_duration;
-(CAAnimation  *(^)(float  speed))set_speed;
-(CAAnimation  *(^)(double  timeOffset))set_timeOffset;
-(CAAnimation  *(^)(float  repeatCount))set_repeatCount;
-(CAAnimation  *(^)(double  repeatDuration))set_repeatDuration;
-(CAAnimation  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAAnimation  *(^)(NSString *  fillMode))set_fillMode;




//superclass pros NSObject
-(CAAnimation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAAnimation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAAnimation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAAnimation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAAnimation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAAnimation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAAnimation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAAnimation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAAnimation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAAnimation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAAnimation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAAnimation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAAnimation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAAnimation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end