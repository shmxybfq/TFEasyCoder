//
//  UITextField+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITextField (TFEasyCoder)






-(UITextField  *(^)(NSString *  text))set_text;
-(UITextField  *(^)(NSAttributedString *  attributedText))set_attributedText;
-(UITextField  *(^)(UIColor *  textColor))set_textColor;
-(UITextField  *(^)(UIFont *  font))set_font;
-(UITextField  *(^)(long long  textAlignment))set_textAlignment;
-(UITextField  *(^)(long long  borderStyle))set_borderStyle;
-(UITextField  *(^)(NSDictionary *  defaultTextAttributes))set_defaultTextAttributes;
-(UITextField  *(^)(NSString *  placeholder))set_placeholder;
-(UITextField  *(^)(NSAttributedString *  attributedPlaceholder))set_attributedPlaceholder;
-(UITextField  *(^)(BOOL  clearsOnBeginEditing))set_clearsOnBeginEditing;
-(UITextField  *(^)(BOOL  adjustsFontSizeToFitWidth))set_adjustsFontSizeToFitWidth;
-(UITextField  *(^)(double  minimumFontSize))set_minimumFontSize;
-(UITextField  *(^)(id<UITextFieldDelegate>    delegate))set_delegate;
-(UITextField  *(^)(UIImage *  background))set_background;
-(UITextField  *(^)(UIImage *  disabledBackground))set_disabledBackground;
-(UITextField  *(^)(BOOL  allowsEditingTextAttributes))set_allowsEditingTextAttributes;
-(UITextField  *(^)(NSDictionary *  typingAttributes))set_typingAttributes;
-(UITextField  *(^)(long long  clearButtonMode))set_clearButtonMode;
-(UITextField  *(^)(UIView *  leftView))set_leftView;
-(UITextField  *(^)(long long  leftViewMode))set_leftViewMode;
-(UITextField  *(^)(UIView *  rightView))set_rightView;
-(UITextField  *(^)(long long  rightViewMode))set_rightViewMode;
-(UITextField  *(^)(UIView *  inputView))set_inputView;
-(UITextField  *(^)(UIView *  inputAccessoryView))set_inputAccessoryView;
-(UITextField  *(^)(BOOL  clearsOnInsertion))set_clearsOnInsertion;
-(UITextField  *(^)(long long  autocapitalizationType))set_autocapitalizationType;
-(UITextField  *(^)(long long  autocorrectionType))set_autocorrectionType;
-(UITextField  *(^)(long long  spellCheckingType))set_spellCheckingType;
-(UITextField  *(^)(long long  keyboardType))set_keyboardType;
-(UITextField  *(^)(long long  keyboardAppearance))set_keyboardAppearance;
-(UITextField  *(^)(long long  returnKeyType))set_returnKeyType;
-(UITextField  *(^)(BOOL  enablesReturnKeyAutomatically))set_enablesReturnKeyAutomatically;
-(UITextField  *(^)(BOOL  secureTextEntry))set_secureTextEntry;
-(UITextField  *(^)(NSDictionary *  markedTextStyle))set_markedTextStyle;
-(UITextField  *(^)(id<UITextInputDelegate>    inputDelegate))set_inputDelegate;
-(UITextField  *(^)(long long  selectionAffinity))set_selectionAffinity;





//superclass pros UIControl
-(UITextField  *(^)(BOOL  enabled))set_enabled;
-(UITextField  *(^)(BOOL  selected))set_selected;
-(UITextField  *(^)(BOOL  highlighted))set_highlighted;
-(UITextField  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UITextField  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;
//superclass pros UIView
-(UITextField  *(^)(UIView *  maskView))set_maskView;
-(UITextField  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UITextField  *(^)(long long  tag))set_tag;
-(UITextField  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UITextField  *(^)(CGPoint  center))set_center;
-(UITextField  *(^)(CGRect  frame))set_frame;
-(UITextField  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UITextField  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UITextField  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITextField  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITextField  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITextField  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITextField  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITextField  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITextField  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITextField  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITextField  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITextField  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITextField  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITextField  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITextField  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITextField  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
