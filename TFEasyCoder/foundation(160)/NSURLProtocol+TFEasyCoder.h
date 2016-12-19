//
//  NSURLProtocol+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLProtocol (TFEasyCoder)









//superclass pros NSObject
-(NSURLProtocol  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLProtocol  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLProtocol  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLProtocol  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLProtocol  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLProtocol  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLProtocol  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLProtocol  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLProtocol  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLProtocol  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLProtocol  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLProtocol  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLProtocol  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLProtocol  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end