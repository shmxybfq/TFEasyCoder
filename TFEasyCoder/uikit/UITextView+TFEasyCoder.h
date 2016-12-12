//
//  UITextView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITextView (TFEasyCoder)





-(UITextView  *(^)(id<UITextViewDelegate>    delegate))set_delegate;
-(UITextView  *(^)(NSString *  text))set_text;
-(UITextView  *(^)(UIFont *  font))set_font;
-(UITextView  *(^)(UIColor *  textColor))set_textColor;
-(UITextView  *(^)(long long  textAlignment))set_textAlignment;
-(UITextView  *(^)(BOOL  editable))set_editable;
-(UITextView  *(^)(BOOL  selectable))set_selectable;
-(UITextView  *(^)(unsigned long long  dataDetectorTypes))set_dataDetectorTypes;
-(UITextView  *(^)(BOOL  allowsEditingTextAttributes))set_allowsEditingTextAttributes;
-(UITextView  *(^)(NSAttributedString *  attributedText))set_attributedText;
-(UITextView  *(^)(NSDictionary *  typingAttributes))set_typingAttributes;
-(UITextView  *(^)(UIView *  inputView))set_inputView;
-(UITextView  *(^)(UIView *  inputAccessoryView))set_inputAccessoryView;
-(UITextView  *(^)(BOOL  clearsOnInsertion))set_clearsOnInsertion;
-(UITextView  *(^)(UIEdgeInsets  textContainerInset))set_textContainerInset;
-(UITextView  *(^)(NSDictionary *  linkTextAttributes))set_linkTextAttributes;
-(UITextView  *(^)(long long  autocapitalizationType))set_autocapitalizationType;
-(UITextView  *(^)(long long  autocorrectionType))set_autocorrectionType;
-(UITextView  *(^)(long long  spellCheckingType))set_spellCheckingType;
-(UITextView  *(^)(long long  keyboardType))set_keyboardType;
-(UITextView  *(^)(long long  keyboardAppearance))set_keyboardAppearance;
-(UITextView  *(^)(long long  returnKeyType))set_returnKeyType;
-(UITextView  *(^)(BOOL  enablesReturnKeyAutomatically))set_enablesReturnKeyAutomatically;
-(UITextView  *(^)(BOOL  secureTextEntry))set_secureTextEntry;
-(UITextView  *(^)(NSDictionary *  markedTextStyle))set_markedTextStyle;
-(UITextView  *(^)(id<UITextInputDelegate>    inputDelegate))set_inputDelegate;
-(UITextView  *(^)(long long  selectionAffinity))set_selectionAffinity;





//superclass pros UIScrollView
-(UITextView  *(^)(CGPoint  contentOffset))set_contentOffset;
-(UITextView  *(^)(CGSize  contentSize))set_contentSize;
-(UITextView  *(^)(UIEdgeInsets  contentInset))set_contentInset;
//TF_EC_CHAIN_PROP_INT(UITextView ,id<UIScrollViewDelegate> ,delegate);
-(UITextView  *(^)(BOOL  directionalLockEnabled))set_directionalLockEnabled;
-(UITextView  *(^)(BOOL  bounces))set_bounces;
-(UITextView  *(^)(BOOL  alwaysBounceVertical))set_alwaysBounceVertical;
-(UITextView  *(^)(BOOL  alwaysBounceHorizontal))set_alwaysBounceHorizontal;
-(UITextView  *(^)(BOOL  pagingEnabled))set_pagingEnabled;
-(UITextView  *(^)(BOOL  scrollEnabled))set_scrollEnabled;
-(UITextView  *(^)(BOOL  showsHorizontalScrollIndicator))set_showsHorizontalScrollIndicator;
-(UITextView  *(^)(BOOL  showsVerticalScrollIndicator))set_showsVerticalScrollIndicator;
-(UITextView  *(^)(UIEdgeInsets  scrollIndicatorInsets))set_scrollIndicatorInsets;
-(UITextView  *(^)(long long  indicatorStyle))set_indicatorStyle;
-(UITextView  *(^)(double  decelerationRate))set_decelerationRate;
-(UITextView  *(^)(BOOL  delaysContentTouches))set_delaysContentTouches;
-(UITextView  *(^)(BOOL  canCancelContentTouches))set_canCancelContentTouches;
-(UITextView  *(^)(double  minimumZoomScale))set_minimumZoomScale;
-(UITextView  *(^)(double  maximumZoomScale))set_maximumZoomScale;
-(UITextView  *(^)(double  zoomScale))set_zoomScale;
-(UITextView  *(^)(BOOL  bouncesZoom))set_bouncesZoom;
-(UITextView  *(^)(BOOL  scrollsToTop))set_scrollsToTop;
-(UITextView  *(^)(long long  keyboardDismissMode))set_keyboardDismissMode;
//superclass pros UIView
-(UITextView  *(^)(UIView *  maskView))set_maskView;
-(UITextView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UITextView  *(^)(long long  tag))set_tag;
-(UITextView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UITextView  *(^)(CGPoint  center))set_center;
-(UITextView  *(^)(CGRect  frame))set_frame;
-(UITextView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UITextView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UITextView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITextView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITextView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITextView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITextView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITextView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITextView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITextView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITextView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITextView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITextView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITextView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITextView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITextView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
