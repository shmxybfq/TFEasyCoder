//
//  NSURLSessionTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSURLSessionTaskEasyCoderBlock) (NSURLSessionTask * ins);

@interface NSURLSessionTask (TFEasyCoder)

+( NSURLSessionTask *)easyCoder:(NSURLSessionTaskEasyCoderBlock)block;
-(NSURLSessionTask *)easyCoder:(NSURLSessionTaskEasyCoderBlock)block;



-(NSURLSessionTask  *(^)(NSString *  taskDescription))set_taskDescription;
-(NSURLSessionTask  *(^)(float  priority))set_priority;




//superclass pros NSObject
-(NSURLSessionTask  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLSessionTask  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLSessionTask  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLSessionTask  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLSessionTask  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLSessionTask  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLSessionTask  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLSessionTask  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLSessionTask  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLSessionTask  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLSessionTask  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLSessionTask  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLSessionTask  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLSessionTask  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSURLSessionTask *(^)(id value,NSString *key))set_ValueKey;


@end