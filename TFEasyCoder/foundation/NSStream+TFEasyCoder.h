//
//  NSStream+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSStream (TFEasyCoder)





-(NSStream  *(^)(id<NSStreamDelegate>   delegate))set_delegate;




//superclass pros NSObject
-(NSStream  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSStream  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSStream  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSStream  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSStream  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSStream  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSStream  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSStream  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSStream  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSStream  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSStream  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSStream  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSStream  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSStream  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end