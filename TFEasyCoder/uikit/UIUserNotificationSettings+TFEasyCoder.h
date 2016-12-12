//
//  UIUserNotificationSettings+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIUserNotificationSettings (TFEasyCoder)









//superclass pros NSObject
-(UIUserNotificationSettings  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIUserNotificationSettings  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIUserNotificationSettings  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIUserNotificationSettings  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIUserNotificationSettings  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIUserNotificationSettings  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIUserNotificationSettings  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIUserNotificationSettings  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIUserNotificationSettings  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIUserNotificationSettings  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIUserNotificationSettings  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIUserNotificationSettings  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIUserNotificationSettings  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIUserNotificationSettings  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end