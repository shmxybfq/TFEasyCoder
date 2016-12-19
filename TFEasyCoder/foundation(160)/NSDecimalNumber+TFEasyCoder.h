//
//  NSDecimalNumber+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDecimalNumber (TFEasyCoder)









//superclass pros NSNumber
//superclass pros NSValue
//superclass pros NSObject
-(NSDecimalNumber  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDecimalNumber  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDecimalNumber  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDecimalNumber  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDecimalNumber  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDecimalNumber  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDecimalNumber  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDecimalNumber  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDecimalNumber  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDecimalNumber  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDecimalNumber  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDecimalNumber  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDecimalNumber  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDecimalNumber  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end