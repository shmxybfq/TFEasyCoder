//
//  UIMutableUserNotificationAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIMutableUserNotificationAction (TFEasyCoder)





-(UIMutableUserNotificationAction  *(^)(NSString *  identifier))set_identifier;
-(UIMutableUserNotificationAction  *(^)(NSString *  title))set_title;
-(UIMutableUserNotificationAction  *(^)(unsigned long long  behavior))set_behavior;
-(UIMutableUserNotificationAction  *(^)(NSDictionary *  parameters))set_parameters;
-(UIMutableUserNotificationAction  *(^)(unsigned long long  activationMode))set_activationMode;
-(UIMutableUserNotificationAction  *(^)(BOOL  destructive))set_destructive;




//superclass pros UIUserNotificationAction
//superclass pros NSObject
-(UIMutableUserNotificationAction  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIMutableUserNotificationAction  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIMutableUserNotificationAction  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIMutableUserNotificationAction  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIMutableUserNotificationAction  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIMutableUserNotificationAction  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIMutableUserNotificationAction  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIMutableUserNotificationAction  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIMutableUserNotificationAction  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIMutableUserNotificationAction  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIMutableUserNotificationAction  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIMutableUserNotificationAction  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIMutableUserNotificationAction  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIMutableUserNotificationAction  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end