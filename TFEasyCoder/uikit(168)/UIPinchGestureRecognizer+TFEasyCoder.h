//
//  UIPinchGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPinchGestureRecognizer (TFEasyCoder)





-(UIPinchGestureRecognizer  *(^)(double  scale))set_scale;





//superclass pros UIGestureRecognizer
-(UIPinchGestureRecognizer  *(^)(BOOL  enabled))set_enabled;
-(UIPinchGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView;
-(UIPinchGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan;
-(UIPinchGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded;
-(UIPinchGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes;
-(UIPinchGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes;
//superclass pros NSObject
-(UIPinchGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPinchGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPinchGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPinchGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPinchGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPinchGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPinchGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPinchGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPinchGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPinchGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPinchGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPinchGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPinchGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPinchGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end