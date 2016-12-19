//
//  CAEmitterCell+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAEmitterCell (TFEasyCoder)






-(CAEmitterCell  *(^)(NSString *  name))set_name;
-(CAEmitterCell  *(^)(BOOL  enabled))set_enabled;
-(CAEmitterCell  *(^)(float  birthRate))set_birthRate;
-(CAEmitterCell  *(^)(float  lifetime))set_lifetime;
-(CAEmitterCell  *(^)(float  lifetimeRange))set_lifetimeRange;
-(CAEmitterCell  *(^)(double  emissionLatitude))set_emissionLatitude;
-(CAEmitterCell  *(^)(double  emissionLongitude))set_emissionLongitude;
-(CAEmitterCell  *(^)(double  emissionRange))set_emissionRange;
-(CAEmitterCell  *(^)(double  velocity))set_velocity;
-(CAEmitterCell  *(^)(double  velocityRange))set_velocityRange;
-(CAEmitterCell  *(^)(double  xAcceleration))set_xAcceleration;
-(CAEmitterCell  *(^)(double  yAcceleration))set_yAcceleration;
-(CAEmitterCell  *(^)(double  zAcceleration))set_zAcceleration;
-(CAEmitterCell  *(^)(double  scale))set_scale;
-(CAEmitterCell  *(^)(double  scaleRange))set_scaleRange;
-(CAEmitterCell  *(^)(double  scaleSpeed))set_scaleSpeed;
-(CAEmitterCell  *(^)(double  spin))set_spin;
-(CAEmitterCell  *(^)(double  spinRange))set_spinRange;
-(CAEmitterCell  *(^)(CGColorRef  color))set_color;
-(CAEmitterCell  *(^)(float  redRange))set_redRange;
-(CAEmitterCell  *(^)(float  greenRange))set_greenRange;
-(CAEmitterCell  *(^)(float  blueRange))set_blueRange;
-(CAEmitterCell  *(^)(float  alphaRange))set_alphaRange;
-(CAEmitterCell  *(^)(float  redSpeed))set_redSpeed;
-(CAEmitterCell  *(^)(float  greenSpeed))set_greenSpeed;
-(CAEmitterCell  *(^)(float  blueSpeed))set_blueSpeed;
-(CAEmitterCell  *(^)(float  alphaSpeed))set_alphaSpeed;
-(CAEmitterCell  *(^)(double  contentsScale))set_contentsScale;
-(CAEmitterCell  *(^)(NSString *  minificationFilter))set_minificationFilter;
-(CAEmitterCell  *(^)(NSString *  magnificationFilter))set_magnificationFilter;
-(CAEmitterCell  *(^)(float  minificationFilterBias))set_minificationFilterBias;
-(CAEmitterCell  *(^)(NSArray *  emitterCells))set_emitterCells;
-(CAEmitterCell  *(^)(NSDictionary *  style))set_style;
-(CAEmitterCell  *(^)(double  beginTime))set_beginTime;
-(CAEmitterCell  *(^)(double  duration))set_duration;
-(CAEmitterCell  *(^)(float  speed))set_speed;
-(CAEmitterCell  *(^)(double  timeOffset))set_timeOffset;
-(CAEmitterCell  *(^)(float  repeatCount))set_repeatCount;
-(CAEmitterCell  *(^)(double  repeatDuration))set_repeatDuration;
-(CAEmitterCell  *(^)(BOOL  autoreverses))set_autoreverses;
-(CAEmitterCell  *(^)(NSString *  fillMode))set_fillMode;




//superclass pros NSObject
-(CAEmitterCell  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAEmitterCell  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAEmitterCell  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAEmitterCell  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAEmitterCell  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAEmitterCell  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAEmitterCell  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAEmitterCell  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAEmitterCell  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAEmitterCell  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAEmitterCell  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAEmitterCell  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAEmitterCell  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAEmitterCell  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end