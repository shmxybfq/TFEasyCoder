//
//  NSURLConnection+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLConnection (TFEasyCoder)









//superclass pros NSObject
-(NSURLConnection  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLConnection  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLConnection  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLConnection  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLConnection  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLConnection  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLConnection  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLConnection  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLConnection  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLConnection  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLConnection  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLConnection  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLConnection  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLConnection  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end