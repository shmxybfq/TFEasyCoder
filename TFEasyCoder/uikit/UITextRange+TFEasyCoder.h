//
//  UITextRange+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITextRange (TFEasyCoder)









//superclass pros NSObject
-(UITextRange  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITextRange  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITextRange  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITextRange  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITextRange  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITextRange  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITextRange  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITextRange  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITextRange  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITextRange  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITextRange  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITextRange  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITextRange  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITextRange  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end