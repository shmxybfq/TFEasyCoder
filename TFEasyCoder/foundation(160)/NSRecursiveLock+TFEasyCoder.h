//
//  NSRecursiveLock+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSRecursiveLock (TFEasyCoder)





-(NSRecursiveLock  *(^)(NSString *  name))set_name;




//superclass pros NSObject
-(NSRecursiveLock  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSRecursiveLock  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSRecursiveLock  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSRecursiveLock  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSRecursiveLock  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSRecursiveLock  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSRecursiveLock  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSRecursiveLock  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSRecursiveLock  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSRecursiveLock  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSRecursiveLock  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSRecursiveLock  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSRecursiveLock  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSRecursiveLock  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end