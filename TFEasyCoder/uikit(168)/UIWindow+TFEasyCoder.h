//
//  UIWindow+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIWindow (TFEasyCoder)





-(UIWindow  *(^)(UIScreen *  screen))set_screen;
-(UIWindow  *(^)(double  windowLevel))set_windowLevel;
-(UIWindow  *(^)(UIViewController *  rootViewController))set_rootViewController;






//superclass pros UIView
-(UIWindow  *(^)(UIView *  maskView))set_maskView;
-(UIWindow  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIWindow  *(^)(long long  tag))set_tag;
-(UIWindow  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIWindow  *(^)(CGPoint  center))set_center;
-(UIWindow  *(^)(CGRect  frame))set_frame;
-(UIWindow  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIWindow  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIWindow  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIWindow  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIWindow  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIWindow  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIWindow  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIWindow  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIWindow  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIWindow  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIWindow  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIWindow  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIWindow  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIWindow  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIWindow  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIWindow  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
