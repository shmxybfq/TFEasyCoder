//
//  CAAnimationGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAAnimationGroup (TFEasyCoder)





-(CAAnimationGroup  *(^)(NSArray *  animations))set_animations;




//superclass pros CAAnimation
-(CAAnimationGroup  *(^)(CAMediaTimingFunction *  timingFunction))set_timingFunction;
-(CAAnimationGroup  *(^)(double  beginTime))set_beginTime;
-(CAAnimationGroup  *(^)(double  duration))set_duration;
-(CAAnimationGroup  *(^)(float  speed))set_speed;
-(CAAnimationGroup  *(^)(double  timeOffset))set_timeOffset;
-(CAAnimationGroup  *(^)(float  repeatCount))set_repeatCount;
-(CAAnimationGroup  *(^)(double  repeatDuration))set_repeatDuration;
-(CAAnimationGroup  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAAnimationGroup  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CAAnimationGroup  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAAnimationGroup  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAAnimationGroup  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAAnimationGroup  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAAnimationGroup  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAAnimationGroup  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAAnimationGroup  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAAnimationGroup  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAAnimationGroup  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAAnimationGroup  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAAnimationGroup  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAAnimationGroup  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAAnimationGroup  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAAnimationGroup  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end