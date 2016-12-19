//
//  NSURLQueryItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLQueryItem (TFEasyCoder)









//superclass pros NSObject
-(NSURLQueryItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLQueryItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLQueryItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLQueryItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLQueryItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLQueryItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLQueryItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLQueryItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLQueryItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLQueryItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLQueryItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLQueryItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLQueryItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLQueryItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end