//
//  NSThread+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSThread (TFEasyCoder)





-(NSThread  *(^)(double  threadPriority))set_threadPriority;
-(NSThread  *(^)(long long  qualityOfService))set_qualityOfService;
-(NSThread  *(^)(NSString *  name))set_name;
-(NSThread  *(^)(unsigned long long  stackSize))set_stackSize;




//superclass pros NSObject
-(NSThread  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSThread  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSThread  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSThread  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSThread  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSThread  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSThread  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSThread  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSThread  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSThread  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSThread  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSThread  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSThread  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSThread  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end