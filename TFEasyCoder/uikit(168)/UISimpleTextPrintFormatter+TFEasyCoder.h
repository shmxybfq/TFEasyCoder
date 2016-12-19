//
//  UISimpleTextPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISimpleTextPrintFormatter (TFEasyCoder)





-(UISimpleTextPrintFormatter  *(^)(NSString *  text))set_text;
-(UISimpleTextPrintFormatter  *(^)(NSAttributedString *  attributedText))set_attributedText;
-(UISimpleTextPrintFormatter  *(^)(UIFont *  font))set_font;
-(UISimpleTextPrintFormatter  *(^)(UIColor *  color))set_color;
-(UISimpleTextPrintFormatter  *(^)(long long  textAlignment))set_textAlignment;




//superclass pros UIPrintFormatter
-(UISimpleTextPrintFormatter  *(^)(double  maximumContentHeight))set_maximumContentHeight;
-(UISimpleTextPrintFormatter  *(^)(double  maximumContentWidth))set_maximumContentWidth;
-(UISimpleTextPrintFormatter  *(^)(UIEdgeInsets  contentInsets))set_contentInsets;
-(UISimpleTextPrintFormatter  *(^)(UIEdgeInsets  perPageContentInsets))set_perPageContentInsets;
-(UISimpleTextPrintFormatter  *(^)(long long  startPage))set_startPage;
//superclass pros NSObject
-(UISimpleTextPrintFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISimpleTextPrintFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISimpleTextPrintFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISimpleTextPrintFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISimpleTextPrintFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISimpleTextPrintFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISimpleTextPrintFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISimpleTextPrintFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISimpleTextPrintFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISimpleTextPrintFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISimpleTextPrintFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISimpleTextPrintFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISimpleTextPrintFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISimpleTextPrintFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end