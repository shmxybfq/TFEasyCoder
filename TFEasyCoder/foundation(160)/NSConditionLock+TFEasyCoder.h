//
//  NSConditionLock+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSConditionLock (TFEasyCoder)





-(NSConditionLock  *(^)(NSString *  name))set_name;




//superclass pros NSObject
-(NSConditionLock  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSConditionLock  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSConditionLock  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSConditionLock  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSConditionLock  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSConditionLock  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSConditionLock  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSConditionLock  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSConditionLock  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSConditionLock  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSConditionLock  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSConditionLock  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSConditionLock  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSConditionLock  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end