//
//  UIButton+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIButton (TFEasyCoder)





-(UIButton  *(^)(UIEdgeInsets  contentEdgeInsets))set_contentEdgeInsets;
-(UIButton  *(^)(UIEdgeInsets  titleEdgeInsets))set_titleEdgeInsets;
-(UIButton  *(^)(BOOL  reversesTitleShadowWhenHighlighted))set_reversesTitleShadowWhenHighlighted;
-(UIButton  *(^)(UIEdgeInsets  imageEdgeInsets))set_imageEdgeInsets;
-(UIButton  *(^)(BOOL  adjustsImageWhenHighlighted))set_adjustsImageWhenHighlighted;
-(UIButton  *(^)(BOOL  adjustsImageWhenDisabled))set_adjustsImageWhenDisabled;
-(UIButton  *(^)(BOOL  showsTouchWhenHighlighted))set_showsTouchWhenHighlighted;
-(UIButton  *(^)(UIColor *  tintColor))set_tintColor;

-(UIButton  *(^)(UIFont *  font))set_font;
-(UIButton  *(^)(NSLineBreakMode   lineBreakMode))set_lineBreakMode;
-(UIButton  *(^)(CGSize   titleShadowOffset))set_titleShadowOffset;




//superclass pros UIControl
-(UIButton  *(^)(BOOL  enabled))set_enabled;
-(UIButton  *(^)(BOOL  selected))set_selected;
-(UIButton  *(^)(BOOL  highlighted))set_highlighted;
-(UIButton  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UIButton  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;
//superclass pros UIView
-(UIButton  *(^)(UIView *  maskView))set_maskView;
-(UIButton  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIButton  *(^)(long long  tag))set_tag;
-(UIButton  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIButton  *(^)(CGPoint  center))set_center;
-(UIButton  *(^)(CGRect  frame))set_frame;
-(UIButton  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIButton  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIButton  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIButton  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIButton  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIButton  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIButton  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIButton  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIButton  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIButton  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIButton  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIButton  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIButton  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIButton  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIButton  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIButton  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
