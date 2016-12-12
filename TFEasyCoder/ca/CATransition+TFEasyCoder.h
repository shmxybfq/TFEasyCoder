//
//  CATransition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CATransition (TFEasyCoder)





-(CATransition  *(^)(NSString *  type))set_type;
-(CATransition  *(^)(NSString *  subtype))set_subtype;
-(CATransition  *(^)(float  startProgress))set_startProgress;
-(CATransition  *(^)(float  endProgress))set_endProgress;




//superclass pros CAAnimation
-(CATransition  *(^)(CAMediaTimingFunction *  timingFunction))set_timingFunction;
-(CATransition  *(^)(double  beginTime))set_beginTime;
-(CATransition  *(^)(double  duration))set_duration;
-(CATransition  *(^)(float  speed))set_speed;
-(CATransition  *(^)(double  timeOffset))set_timeOffset;
-(CATransition  *(^)(float  repeatCount))set_repeatCount;
-(CATransition  *(^)(double  repeatDuration))set_repeatDuration;
-(CATransition  *(^)(BOOL  autoreverses))set_autoreverses;
-(CATransition  *(^)(NSString *  fillMode))set_fillMode;
//superclass pros NSObject
-(CATransition  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CATransition  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CATransition  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CATransition  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CATransition  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CATransition  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CATransition  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CATransition  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CATransition  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CATransition  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CATransition  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CATransition  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CATransition  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CATransition  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end