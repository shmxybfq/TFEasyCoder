//
//  NSURLCredentialStorage+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLCredentialStorage (TFEasyCoder)









//superclass pros NSObject
-(NSURLCredentialStorage  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLCredentialStorage  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLCredentialStorage  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLCredentialStorage  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLCredentialStorage  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLCredentialStorage  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLCredentialStorage  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLCredentialStorage  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLCredentialStorage  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLCredentialStorage  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLCredentialStorage  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLCredentialStorage  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLCredentialStorage  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLCredentialStorage  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end