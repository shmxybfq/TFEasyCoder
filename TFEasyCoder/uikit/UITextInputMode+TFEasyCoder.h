//
//  UITextInputMode+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITextInputMode (TFEasyCoder)









//superclass pros NSObject
-(UITextInputMode  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITextInputMode  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITextInputMode  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITextInputMode  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITextInputMode  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITextInputMode  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITextInputMode  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITextInputMode  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITextInputMode  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITextInputMode  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITextInputMode  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITextInputMode  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITextInputMode  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITextInputMode  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end