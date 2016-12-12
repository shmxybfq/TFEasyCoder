//
//  NSUbiquitousKeyValueStore+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSUbiquitousKeyValueStore (TFEasyCoder)









//superclass pros NSObject
-(NSUbiquitousKeyValueStore  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSUbiquitousKeyValueStore  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSUbiquitousKeyValueStore  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSUbiquitousKeyValueStore  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSUbiquitousKeyValueStore  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSUbiquitousKeyValueStore  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSUbiquitousKeyValueStore  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSUbiquitousKeyValueStore  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSUbiquitousKeyValueStore  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSUbiquitousKeyValueStore  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSUbiquitousKeyValueStore  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSUbiquitousKeyValueStore  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSUbiquitousKeyValueStore  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSUbiquitousKeyValueStore  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end