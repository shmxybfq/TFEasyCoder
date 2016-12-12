//
//  UIScreenEdgePanGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIScreenEdgePanGestureRecognizer (TFEasyCoder)





-(UIScreenEdgePanGestureRecognizer  *(^)(unsigned long long  edges))set_edges;




//superclass pros UIPanGestureRecognizer
-(UIScreenEdgePanGestureRecognizer  *(^)(unsigned long long  minimumNumberOfTouches))set_minimumNumberOfTouches;
-(UIScreenEdgePanGestureRecognizer  *(^)(unsigned long long  maximumNumberOfTouches))set_maximumNumberOfTouches;
//superclass pros UIGestureRecognizer
-(UIScreenEdgePanGestureRecognizer  *(^)(BOOL  enabled))set_enabled;
-(UIScreenEdgePanGestureRecognizer  *(^)(BOOL  cancelsTouchesInView))set_cancelsTouchesInView;
-(UIScreenEdgePanGestureRecognizer  *(^)(BOOL  delaysTouchesBegan))set_delaysTouchesBegan;
-(UIScreenEdgePanGestureRecognizer  *(^)(BOOL  delaysTouchesEnded))set_delaysTouchesEnded;
-(UIScreenEdgePanGestureRecognizer  *(^)(NSArray *  allowedTouchTypes))set_allowedTouchTypes;
-(UIScreenEdgePanGestureRecognizer  *(^)(NSArray *  allowedPressTypes))set_allowedPressTypes;
//superclass pros NSObject
-(UIScreenEdgePanGestureRecognizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIScreenEdgePanGestureRecognizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIScreenEdgePanGestureRecognizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIScreenEdgePanGestureRecognizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIScreenEdgePanGestureRecognizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIScreenEdgePanGestureRecognizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIScreenEdgePanGestureRecognizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIScreenEdgePanGestureRecognizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIScreenEdgePanGestureRecognizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIScreenEdgePanGestureRecognizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIScreenEdgePanGestureRecognizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIScreenEdgePanGestureRecognizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIScreenEdgePanGestureRecognizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIScreenEdgePanGestureRecognizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end