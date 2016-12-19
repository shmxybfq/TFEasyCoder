//
//  UILabel+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>



@interface UILabel (TFEasyCoder)


-(UILabel  *(^)(NSString *  text))set_text;
-(UILabel  *(^)(UIFont *  font))set_font;
-(UILabel  *(^)(UIColor *  textColor))set_textColor;
-(UILabel  *(^)(UIColor *  shadowColor))set_shadowColor;
-(UILabel  *(^)(CGSize  shadowOffset))set_shadowOffset;
-(UILabel  *(^)(long long  textAlignment))set_textAlignment;
-(UILabel  *(^)(long long  lineBreakMode))set_lineBreakMode;
-(UILabel  *(^)(NSAttributedString *  attributedText))set_attributedText;
-(UILabel  *(^)(UIColor *  highlightedTextColor))set_highlightedTextColor;
-(UILabel  *(^)(BOOL  highlighted))set_highlighted;
//TF_EC_CHAIN_PROP_INT(UILabel ,BOOL,userInteractionEnabled);
-(UILabel  *(^)(BOOL  enabled))set_enabled;
-(UILabel  *(^)(long long  numberOfLines))set_numberOfLines;
-(UILabel  *(^)(BOOL  adjustsFontSizeToFitWidth))set_adjustsFontSizeToFitWidth;
-(UILabel  *(^)(long long  baselineAdjustment))set_baselineAdjustment;
-(UILabel  *(^)(double  minimumScaleFactor))set_minimumScaleFactor;
-(UILabel  *(^)(BOOL  allowsDefaultTighteningForTruncation))set_allowsDefaultTighteningForTruncation;
-(UILabel  *(^)(double  preferredMaxLayoutWidth))set_preferredMaxLayoutWidth;
-(UILabel  *(^)(double  minimumFontSize))set_minimumFontSize;
-(UILabel  *(^)(BOOL  adjustsLetterSpacingToFitWidth))set_adjustsLetterSpacingToFitWidth;





//superclass pros UIView
-(UILabel  *(^)(UIView *  maskView))set_maskView;
-(UILabel  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UILabel  *(^)(long long  tag))set_tag;
-(UILabel  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UILabel  *(^)(CGPoint  center))set_center;
-(UILabel  *(^)(CGRect  frame))set_frame;
-(UILabel  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UILabel  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UILabel  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UILabel  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UILabel  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UILabel  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UILabel  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UILabel  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UILabel  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UILabel  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UILabel  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UILabel  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UILabel  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UILabel  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UILabel  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UILabel  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;







@end
