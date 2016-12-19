//
//  UIMarkupTextPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIMarkupTextPrintFormatter (TFEasyCoder)





-(UIMarkupTextPrintFormatter  *(^)(NSString *  markupText))set_markupText;




//superclass pros UIPrintFormatter
-(UIMarkupTextPrintFormatter  *(^)(double  maximumContentHeight))set_maximumContentHeight;
-(UIMarkupTextPrintFormatter  *(^)(double  maximumContentWidth))set_maximumContentWidth;
-(UIMarkupTextPrintFormatter  *(^)(UIEdgeInsets  contentInsets))set_contentInsets;
-(UIMarkupTextPrintFormatter  *(^)(UIEdgeInsets  perPageContentInsets))set_perPageContentInsets;
-(UIMarkupTextPrintFormatter  *(^)(long long  startPage))set_startPage;
//superclass pros NSObject
-(UIMarkupTextPrintFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIMarkupTextPrintFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIMarkupTextPrintFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIMarkupTextPrintFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIMarkupTextPrintFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIMarkupTextPrintFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIMarkupTextPrintFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIMarkupTextPrintFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIMarkupTextPrintFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIMarkupTextPrintFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIMarkupTextPrintFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIMarkupTextPrintFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIMarkupTextPrintFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIMarkupTextPrintFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end