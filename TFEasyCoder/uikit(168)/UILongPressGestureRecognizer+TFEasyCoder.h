//
//  UILongPressGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UILongPressGestureRecognizer (TFEasyCoder)





-(UILongPressGestureRecognizer  *(^)(unsigned long long  numberOfTapsRequired))set_numberOfTapsRequired;
-(UILongPressGestureRecognizer  *(^)(double  minimumPressDuration))set_minimumPressDuration;
-(UILongPressGestureRecognizer  *(^)(double  allowableMovement))set_allowableMovement;





//superclass pros UIGestureRecognizer
-(UILongPressGestureRecognizer  *(^)(BOOL  enabled))set_enabled;
-(UILongPressGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView;
-(UILongPressGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan;
-(UILongPressGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded;
-(UILongPressGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes;
-(UILongPressGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes;
//superclass pros NSObject
-(UILongPressGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UILongPressGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UILongPressGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UILongPressGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UILongPressGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UILongPressGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UILongPressGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UILongPressGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UILongPressGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UILongPressGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UILongPressGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UILongPressGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UILongPressGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UILongPressGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end