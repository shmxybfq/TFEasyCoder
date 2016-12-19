//
//  UIApplication+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIApplication (TFEasyCoder)





-(UIApplication  *(^)(id<UIApplicationDelegate>    delegate))set_delegate;
-(UIApplication  *(^)(BOOL  idleTimerDisabled))set_idleTimerDisabled;
-(UIApplication  *(^)(BOOL  networkActivityIndicatorVisible))set_networkActivityIndicatorVisible;
-(UIApplication  *(^)(long long  applicationIconBadgeNumber))set_applicationIconBadgeNumber;
-(UIApplication  *(^)(BOOL  applicationSupportsShakeToEdit))set_applicationSupportsShakeToEdit;




//superclass pros UIResponder
-(UIApplication  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIApplication  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIApplication  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIApplication  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIApplication  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIApplication  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIApplication  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIApplication  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIApplication  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIApplication  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIApplication  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIApplication  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIApplication  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIApplication  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIApplication  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end