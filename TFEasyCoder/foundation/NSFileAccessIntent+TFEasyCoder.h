//
//  NSFileAccessIntent+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSFileAccessIntent (TFEasyCoder)









//superclass pros NSObject
-(NSFileAccessIntent  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSFileAccessIntent  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSFileAccessIntent  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSFileAccessIntent  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSFileAccessIntent  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSFileAccessIntent  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSFileAccessIntent  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSFileAccessIntent  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSFileAccessIntent  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSFileAccessIntent  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSFileAccessIntent  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSFileAccessIntent  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSFileAccessIntent  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSFileAccessIntent  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end