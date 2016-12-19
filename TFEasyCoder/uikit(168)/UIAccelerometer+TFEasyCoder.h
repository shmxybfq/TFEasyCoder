//
//  UIAccelerometer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"



@interface UIAccelerometer (TFEasyCoder)





-(UIAccelerometer  *(^)(double  updateInterval))set_updateInterval;
-(UIAccelerometer  *(^)(id<UIAccelerometerDelegate>   delegate))set_delegate;




//superclass pros NSObject
-(UIAccelerometer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIAccelerometer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIAccelerometer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIAccelerometer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIAccelerometer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIAccelerometer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIAccelerometer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIAccelerometer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIAccelerometer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIAccelerometer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIAccelerometer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIAccelerometer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIAccelerometer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIAccelerometer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end