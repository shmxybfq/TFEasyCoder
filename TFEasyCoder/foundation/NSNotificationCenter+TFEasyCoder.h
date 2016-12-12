//
//  NSNotificationCenter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSNotificationCenter (TFEasyCoder)









//superclass pros NSObject
-(NSNotificationCenter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSNotificationCenter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSNotificationCenter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSNotificationCenter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSNotificationCenter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSNotificationCenter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSNotificationCenter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSNotificationCenter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSNotificationCenter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSNotificationCenter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSNotificationCenter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSNotificationCenter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSNotificationCenter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSNotificationCenter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end