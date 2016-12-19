//
//  UIRotationGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIRotationGestureRecognizer (TFEasyCoder)





-(UIRotationGestureRecognizer  *(^)(double  rotation))set_rotation;




//superclass pros UIGestureRecognizer
-(UIRotationGestureRecognizer  *(^)(BOOL  enabled))set_enabled;
-(UIRotationGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView;
-(UIRotationGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan;
-(UIRotationGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded;
-(UIRotationGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes;
-(UIRotationGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes;
//superclass pros NSObject
-(UIRotationGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIRotationGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIRotationGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIRotationGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIRotationGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIRotationGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIRotationGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIRotationGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIRotationGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIRotationGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIRotationGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIRotationGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIRotationGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIRotationGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end