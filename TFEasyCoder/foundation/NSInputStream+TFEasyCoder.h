//
//  NSInputStream+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSInputStream (TFEasyCoder)









//superclass pros NSStream
-(NSInputStream  *(^)(id<NSStreamDelegate>   delegate))set_delegate;
//superclass pros NSObject
-(NSInputStream  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSInputStream  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSInputStream  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSInputStream  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSInputStream  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSInputStream  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSInputStream  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSInputStream  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSInputStream  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSInputStream  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSInputStream  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSInputStream  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSInputStream  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSInputStream  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end