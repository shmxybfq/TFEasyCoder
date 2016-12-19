//
//  UITextPosition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITextPosition (TFEasyCoder)









//superclass pros NSObject
-(UITextPosition  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITextPosition  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITextPosition  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITextPosition  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITextPosition  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITextPosition  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITextPosition  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITextPosition  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITextPosition  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITextPosition  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITextPosition  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITextPosition  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITextPosition  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITextPosition  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end