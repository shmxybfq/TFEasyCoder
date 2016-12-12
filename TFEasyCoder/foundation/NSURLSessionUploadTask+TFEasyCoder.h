//
//  NSURLSessionUploadTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLSessionUploadTask (TFEasyCoder)









//superclass pros NSURLSessionDataTask
//superclass pros NSURLSessionTask
-(NSURLSessionUploadTask  *(^)(NSString *  taskDescription))set_taskDescription;
-(NSURLSessionUploadTask  *(^)(float  priority))set_priority;
//superclass pros NSObject
-(NSURLSessionUploadTask  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLSessionUploadTask  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLSessionUploadTask  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLSessionUploadTask  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLSessionUploadTask  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLSessionUploadTask  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLSessionUploadTask  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLSessionUploadTask  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLSessionUploadTask  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLSessionUploadTask  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLSessionUploadTask  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLSessionUploadTask  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLSessionUploadTask  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLSessionUploadTask  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end