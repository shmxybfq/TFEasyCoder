//
//  NSDecimalNumberHandler+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDecimalNumberHandler (TFEasyCoder)









//superclass pros NSObject
-(NSDecimalNumberHandler  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDecimalNumberHandler  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDecimalNumberHandler  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDecimalNumberHandler  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDecimalNumberHandler  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDecimalNumberHandler  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDecimalNumberHandler  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDecimalNumberHandler  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDecimalNumberHandler  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDecimalNumberHandler  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDecimalNumberHandler  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDecimalNumberHandler  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDecimalNumberHandler  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDecimalNumberHandler  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end