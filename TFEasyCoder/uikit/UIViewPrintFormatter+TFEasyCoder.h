//
//  UIViewPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIViewPrintFormatterEasyCoderBlock) (UIViewPrintFormatter * ins);

@interface UIViewPrintFormatter (TFEasyCoder)

+( UIViewPrintFormatter *)easyCoder:(UIViewPrintFormatterEasyCoderBlock)block;
-(UIViewPrintFormatter *)easyCoder:(UIViewPrintFormatterEasyCoderBlock)block;






//superclass pros UIPrintFormatter
-(UIViewPrintFormatter  *(^)(double  maximumContentHeight))set_maximumContentHeight;
-(UIViewPrintFormatter  *(^)(double  maximumContentWidth))set_maximumContentWidth;
-(UIViewPrintFormatter  *(^)(UIEdgeInsets  contentInsets))set_contentInsets;
-(UIViewPrintFormatter  *(^)(UIEdgeInsets  perPageContentInsets))set_perPageContentInsets;
-(UIViewPrintFormatter  *(^)(long long  startPage))set_startPage;
//superclass pros NSObject
-(UIViewPrintFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIViewPrintFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIViewPrintFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIViewPrintFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIViewPrintFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIViewPrintFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIViewPrintFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIViewPrintFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIViewPrintFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIViewPrintFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIViewPrintFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIViewPrintFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIViewPrintFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIViewPrintFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIViewPrintFormatter *(^)(id value,NSString *key))set_ValueKey;


@end