//
//  UIUserNotificationAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIUserNotificationAction (TFEasyCoder)









//superclass pros NSObject
-(UIUserNotificationAction  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIUserNotificationAction  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIUserNotificationAction  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIUserNotificationAction  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIUserNotificationAction  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIUserNotificationAction  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIUserNotificationAction  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIUserNotificationAction  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIUserNotificationAction  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIUserNotificationAction  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIUserNotificationAction  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIUserNotificationAction  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIUserNotificationAction  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIUserNotificationAction  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end