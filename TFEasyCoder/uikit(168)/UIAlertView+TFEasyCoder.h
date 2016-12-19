//
//  UIAlertView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>



#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"




@interface UIAlertView (TFEasyCoder)





-(UIAlertView  *(^)(NSString *  title))set_title;
-(UIAlertView  *(^)(NSString *  message))set_message;
-(UIAlertView  *(^)(long long  cancelButtonIndex))set_cancelButtonIndex;
-(UIAlertView  *(^)(long long  alertViewStyle))set_alertViewStyle;




//superclass pros UIView
-(UIAlertView  *(^)(UIView *  maskView))set_maskView;
-(UIAlertView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIAlertView  *(^)(long long  tag))set_tag;
-(UIAlertView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIAlertView  *(^)(CGPoint  center))set_center;
-(UIAlertView  *(^)(CGRect  frame))set_frame;
-(UIAlertView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIAlertView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIAlertView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIAlertView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIAlertView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIAlertView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIAlertView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIAlertView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIAlertView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIAlertView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIAlertView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIAlertView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIAlertView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIAlertView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIAlertView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIAlertView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
