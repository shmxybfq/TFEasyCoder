//
//  NSURLSessionStreamTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLSessionStreamTask (TFEasyCoder)









//superclass pros NSURLSessionTask
-(NSURLSessionStreamTask  *(^)(NSString *  taskDescription))set_taskDescription;
-(NSURLSessionStreamTask  *(^)(float  priority))set_priority;
//superclass pros NSObject
-(NSURLSessionStreamTask  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLSessionStreamTask  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLSessionStreamTask  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLSessionStreamTask  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLSessionStreamTask  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLSessionStreamTask  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLSessionStreamTask  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLSessionStreamTask  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLSessionStreamTask  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLSessionStreamTask  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLSessionStreamTask  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLSessionStreamTask  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLSessionStreamTask  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLSessionStreamTask  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end