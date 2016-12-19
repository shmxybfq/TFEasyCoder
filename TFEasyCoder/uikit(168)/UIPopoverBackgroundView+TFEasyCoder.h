//
//  UIPopoverBackgroundView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPopoverBackgroundView (TFEasyCoder)





-(UIPopoverBackgroundView  *(^)(double  arrowOffset))set_arrowOffset;
-(UIPopoverBackgroundView  *(^)(unsigned long long  arrowDirection))set_arrowDirection;




//superclass pros UIView
-(UIPopoverBackgroundView  *(^)(UIView *  maskView))set_maskView;
-(UIPopoverBackgroundView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIPopoverBackgroundView  *(^)(long long  tag))set_tag;
-(UIPopoverBackgroundView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIPopoverBackgroundView  *(^)(CGPoint  center))set_center;
-(UIPopoverBackgroundView  *(^)(CGRect  frame))set_frame;
-(UIPopoverBackgroundView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIPopoverBackgroundView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIPopoverBackgroundView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPopoverBackgroundView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPopoverBackgroundView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPopoverBackgroundView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPopoverBackgroundView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPopoverBackgroundView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPopoverBackgroundView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPopoverBackgroundView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPopoverBackgroundView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPopoverBackgroundView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPopoverBackgroundView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPopoverBackgroundView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPopoverBackgroundView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPopoverBackgroundView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
