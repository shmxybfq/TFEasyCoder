//
//  NSLocale+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSLocale (TFEasyCoder)









//superclass pros NSObject
-(NSLocale  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLocale  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLocale  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLocale  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLocale  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLocale  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLocale  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLocale  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLocale  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLocale  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLocale  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLocale  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLocale  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLocale  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end