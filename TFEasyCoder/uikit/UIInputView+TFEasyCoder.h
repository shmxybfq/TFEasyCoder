//
//  UIInputView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIInputView (TFEasyCoder)





-(UIInputView  *(^)(BOOL  allowsSelfSizing))set_allowsSelfSizing;





//superclass pros UIView
-(UIInputView  *(^)(UIView *  maskView))set_maskView;
-(UIInputView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIInputView  *(^)(long long  tag))set_tag;
-(UIInputView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIInputView  *(^)(CGPoint  center))set_center;
-(UIInputView  *(^)(CGRect  frame))set_frame;
-(UIInputView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIInputView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIInputView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIInputView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIInputView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIInputView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIInputView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIInputView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIInputView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIInputView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIInputView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIInputView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIInputView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIInputView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIInputView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIInputView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
