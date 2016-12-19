//
//  NSURLProtectionSpace+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLProtectionSpace (TFEasyCoder)









//superclass pros NSObject
-(NSURLProtectionSpace  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLProtectionSpace  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLProtectionSpace  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLProtectionSpace  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLProtectionSpace  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLProtectionSpace  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLProtectionSpace  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLProtectionSpace  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLProtectionSpace  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLProtectionSpace  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLProtectionSpace  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLProtectionSpace  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLProtectionSpace  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLProtectionSpace  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end