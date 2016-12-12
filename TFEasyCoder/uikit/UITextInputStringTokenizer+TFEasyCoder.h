//
//  UITextInputStringTokenizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITextInputStringTokenizer (TFEasyCoder)









//superclass pros NSObject
-(UITextInputStringTokenizer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITextInputStringTokenizer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITextInputStringTokenizer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITextInputStringTokenizer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITextInputStringTokenizer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITextInputStringTokenizer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITextInputStringTokenizer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITextInputStringTokenizer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITextInputStringTokenizer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITextInputStringTokenizer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITextInputStringTokenizer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITextInputStringTokenizer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITextInputStringTokenizer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITextInputStringTokenizer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end