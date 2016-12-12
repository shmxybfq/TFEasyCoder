//
//  NSInvocationOperation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"




@interface NSInvocationOperation (TFEasyCoder)









//superclass pros NSOperation
-(NSInvocationOperation  *(^)(long long  queuePriority))set_queuePriority;
-(NSInvocationOperation  *(^)(double  threadPriority))set_threadPriority;
-(NSInvocationOperation  *(^)(long long  qualityOfService))set_qualityOfService;
-(NSInvocationOperation  *(^)(NSString *  name))set_name;
//superclass pros NSObject
-(NSInvocationOperation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSInvocationOperation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSInvocationOperation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSInvocationOperation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSInvocationOperation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSInvocationOperation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSInvocationOperation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSInvocationOperation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSInvocationOperation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSInvocationOperation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSInvocationOperation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSInvocationOperation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSInvocationOperation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSInvocationOperation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
