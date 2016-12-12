//
//  UITapGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITapGestureRecognizer (TFEasyCoder)





-(UITapGestureRecognizer  *(^)(unsigned long long  numberOfTapsRequired))set_numberOfTapsRequired;
-(UITapGestureRecognizer  *(^)(unsigned long long  numberOfTouchesRequired))set_numberOfTouchesRequired;





//superclass pros UIGestureRecognizer
-(UITapGestureRecognizer  *(^)(BOOL  enabled))set_enabled;
-(UITapGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView;
-(UITapGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan;
-(UITapGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded;
-(UITapGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes;
-(UITapGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes;
//superclass pros NSObject
-(UITapGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITapGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITapGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITapGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITapGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITapGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITapGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITapGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITapGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITapGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITapGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITapGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITapGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITapGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end