//
//  NSBlockOperation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSBlockOperation (TFEasyCoder)









//superclass pros NSOperation
-(NSBlockOperation  *(^)(long long  queuePriority))set_queuePriority;
-(NSBlockOperation  *(^)(double  threadPriority))set_threadPriority;
-(NSBlockOperation  *(^)(long long  qualityOfService))set_qualityOfService;
-(NSBlockOperation  *(^)(NSString *  name))set_name;
//superclass pros NSObject
-(NSBlockOperation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSBlockOperation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSBlockOperation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSBlockOperation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSBlockOperation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSBlockOperation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSBlockOperation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSBlockOperation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSBlockOperation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSBlockOperation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSBlockOperation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSBlockOperation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSBlockOperation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSBlockOperation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end