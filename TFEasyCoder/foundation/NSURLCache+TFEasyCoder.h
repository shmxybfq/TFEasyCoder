//
//  NSURLCache+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLCache (TFEasyCoder)





-(NSURLCache  *(^)(unsigned long long  memoryCapacity))set_memoryCapacity;
-(NSURLCache  *(^)(unsigned long long  diskCapacity))set_diskCapacity;




//superclass pros NSObject
-(NSURLCache  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLCache  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLCache  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLCache  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLCache  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLCache  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLCache  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLCache  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLCache  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLCache  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLCache  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLCache  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLCache  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLCache  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end