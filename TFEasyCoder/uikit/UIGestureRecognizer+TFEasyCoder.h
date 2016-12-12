//
//  UIGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIGestureRecognizer (TFEasyCoder)





-(UIGestureRecognizer  *(^)(BOOL  enabled))set_enabled;
-(UIGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView;
-(UIGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan;
-(UIGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded;
-(UIGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes;
-(UIGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes;




//superclass pros NSObject
-(UIGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end