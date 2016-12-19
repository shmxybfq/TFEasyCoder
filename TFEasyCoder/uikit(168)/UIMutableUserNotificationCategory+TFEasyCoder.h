//
//  UIMutableUserNotificationCategory+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIMutableUserNotificationCategory (TFEasyCoder)





-(UIMutableUserNotificationCategory  *(^)(NSString *  identifier))set_identifier;




//superclass pros UIUserNotificationCategory
//superclass pros NSObject
-(UIMutableUserNotificationCategory  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIMutableUserNotificationCategory  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIMutableUserNotificationCategory  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIMutableUserNotificationCategory  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIMutableUserNotificationCategory  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIMutableUserNotificationCategory  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIMutableUserNotificationCategory  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIMutableUserNotificationCategory  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIMutableUserNotificationCategory  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIMutableUserNotificationCategory  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIMutableUserNotificationCategory  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIMutableUserNotificationCategory  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIMutableUserNotificationCategory  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIMutableUserNotificationCategory  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end