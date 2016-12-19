//
//  NSMethodSignature+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMethodSignature (TFEasyCoder)









//superclass pros NSObject
-(NSMethodSignature  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMethodSignature  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMethodSignature  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMethodSignature  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMethodSignature  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMethodSignature  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMethodSignature  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMethodSignature  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMethodSignature  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMethodSignature  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMethodSignature  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMethodSignature  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMethodSignature  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMethodSignature  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end