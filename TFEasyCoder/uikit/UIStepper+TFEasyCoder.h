//
//  UIStepper+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIStepper (TFEasyCoder)





-(UIStepper  *(^)(BOOL  continuous))set_continuous;
-(UIStepper  *(^)(BOOL  autorepeat))set_autorepeat;
-(UIStepper  *(^)(BOOL  wraps))set_wraps;
-(UIStepper  *(^)(double  value))set_value;
-(UIStepper  *(^)(double  minimumValue))set_minimumValue;
-(UIStepper  *(^)(double  maximumValue))set_maximumValue;
-(UIStepper  *(^)(double  stepValue))set_stepValue;
-(UIStepper  *(^)(UIColor *  tintColor))set_tintColor;




//superclass pros UIControl
-(UIStepper  *(^)(BOOL  enabled))set_enabled;
-(UIStepper  *(^)(BOOL  selected))set_selected;
-(UIStepper  *(^)(BOOL  highlighted))set_highlighted;
-(UIStepper  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UIStepper  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;
//superclass pros UIView
-(UIStepper  *(^)(UIView *  maskView))set_maskView;
-(UIStepper  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIStepper  *(^)(long long  tag))set_tag;
-(UIStepper  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIStepper  *(^)(CGPoint  center))set_center;
-(UIStepper  *(^)(CGRect  frame))set_frame;
-(UIStepper  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIStepper  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIStepper  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIStepper  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIStepper  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIStepper  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIStepper  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIStepper  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIStepper  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIStepper  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIStepper  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIStepper  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIStepper  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIStepper  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIStepper  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIStepper  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
