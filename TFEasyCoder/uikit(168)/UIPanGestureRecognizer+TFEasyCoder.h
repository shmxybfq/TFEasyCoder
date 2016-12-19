//
//  UIPanGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPanGestureRecognizer (TFEasyCoder)





-(UIPanGestureRecognizer  *(^)(unsigned long long  minimumNumberOfTouches))set_minimumNumberOfTouches;
-(UIPanGestureRecognizer  *(^)(unsigned long long  maximumNumberOfTouches))set_maximumNumberOfTouches;




//superclass pros UIGestureRecognizer
-(UIPanGestureRecognizer  *(^)(BOOL  enabled))set_enabled;
-(UIPanGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView;
-(UIPanGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan;
-(UIPanGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded;
-(UIPanGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes;
-(UIPanGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes;
//superclass pros NSObject
-(UIPanGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPanGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPanGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPanGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPanGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPanGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPanGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPanGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPanGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPanGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPanGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPanGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPanGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPanGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end