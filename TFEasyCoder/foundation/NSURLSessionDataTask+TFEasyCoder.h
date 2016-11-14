//
//  NSURLSessionDataTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSURLSessionDataTaskEasyCoderBlock) (NSURLSessionDataTask * ins);

@interface NSURLSessionDataTask (TFEasyCoder)

+( NSURLSessionDataTask *)easyCoder:(NSURLSessionDataTaskEasyCoderBlock)block;
-(NSURLSessionDataTask *)easyCoder:(NSURLSessionDataTaskEasyCoderBlock)block;






//superclass pros NSURLSessionTask
-(NSURLSessionDataTask  *(^)(NSString *  taskDescription))set_taskDescription;
-(NSURLSessionDataTask  *(^)(float  priority))set_priority;
//superclass pros NSObject
-(NSURLSessionDataTask  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLSessionDataTask  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLSessionDataTask  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLSessionDataTask  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLSessionDataTask  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLSessionDataTask  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLSessionDataTask  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLSessionDataTask  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLSessionDataTask  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLSessionDataTask  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLSessionDataTask  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLSessionDataTask  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLSessionDataTask  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLSessionDataTask  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSURLSessionDataTask *(^)(id value,NSString *key))set_ValueKey;


@end