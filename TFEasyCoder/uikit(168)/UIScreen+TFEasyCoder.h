//
//  UIScreen+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIScreen (TFEasyCoder)




-(UIScreen  *(^)(UIScreenMode *  currentMode))set_currentMode;
-(UIScreen  *(^)(long long  overscanCompensation))set_overscanCompensation;
-(UIScreen  *(^)(double  brightness))set_brightness;
-(UIScreen  *(^)(BOOL  wantsSoftwareDimming))set_wantsSoftwareDimming;






//superclass pros NSObject
-(UIScreen  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIScreen  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIScreen  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIScreen  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIScreen  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIScreen  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIScreen  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIScreen  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIScreen  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIScreen  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIScreen  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIScreen  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIScreen  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIScreen  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end