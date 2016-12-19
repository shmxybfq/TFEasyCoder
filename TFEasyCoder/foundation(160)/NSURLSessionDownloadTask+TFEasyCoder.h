//
//  NSURLSessionDownloadTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLSessionDownloadTask (TFEasyCoder)









//superclass pros NSURLSessionTask
-(NSURLSessionDownloadTask  *(^)(NSString *  taskDescription))set_taskDescription;
-(NSURLSessionDownloadTask  *(^)(float  priority))set_priority;
//superclass pros NSObject
-(NSURLSessionDownloadTask  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLSessionDownloadTask  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLSessionDownloadTask  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLSessionDownloadTask  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLSessionDownloadTask  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLSessionDownloadTask  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLSessionDownloadTask  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLSessionDownloadTask  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLSessionDownloadTask  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLSessionDownloadTask  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLSessionDownloadTask  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLSessionDownloadTask  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLSessionDownloadTask  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLSessionDownloadTask  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end