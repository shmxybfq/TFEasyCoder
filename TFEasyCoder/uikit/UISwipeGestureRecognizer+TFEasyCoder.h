//
//  UISwipeGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISwipeGestureRecognizer (TFEasyCoder)





-(UISwipeGestureRecognizer  *(^)(unsigned long long  direction))set_direction;





//superclass pros UIGestureRecognizer
-(UISwipeGestureRecognizer  *(^)(BOOL  enabled))set_enabled;
-(UISwipeGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView;
-(UISwipeGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan;
-(UISwipeGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded;
-(UISwipeGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes;
-(UISwipeGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes;
//superclass pros NSObject
-(UISwipeGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISwipeGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISwipeGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISwipeGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISwipeGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISwipeGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISwipeGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISwipeGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISwipeGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISwipeGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISwipeGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISwipeGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISwipeGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISwipeGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end