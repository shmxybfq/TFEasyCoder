//
//  NSTextCheckingResult+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSTextCheckingResult (TFEasyCoder)









//superclass pros NSObject
-(NSTextCheckingResult  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSTextCheckingResult  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSTextCheckingResult  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSTextCheckingResult  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSTextCheckingResult  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSTextCheckingResult  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSTextCheckingResult  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSTextCheckingResult  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSTextCheckingResult  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSTextCheckingResult  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSTextCheckingResult  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSTextCheckingResult  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSTextCheckingResult  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSTextCheckingResult  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end