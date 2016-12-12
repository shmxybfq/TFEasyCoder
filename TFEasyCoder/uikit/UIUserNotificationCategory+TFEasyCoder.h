//
//  UIUserNotificationCategory+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIUserNotificationCategory (TFEasyCoder)









//superclass pros NSObject
-(UIUserNotificationCategory  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIUserNotificationCategory  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIUserNotificationCategory  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIUserNotificationCategory  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIUserNotificationCategory  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIUserNotificationCategory  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIUserNotificationCategory  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIUserNotificationCategory  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIUserNotificationCategory  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIUserNotificationCategory  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIUserNotificationCategory  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIUserNotificationCategory  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIUserNotificationCategory  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIUserNotificationCategory  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end