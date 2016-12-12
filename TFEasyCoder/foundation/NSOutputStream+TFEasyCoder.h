//
//  NSOutputStream+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSOutputStream (TFEasyCoder)









//superclass pros NSStream
-(NSOutputStream  *(^)(id<NSStreamDelegate>   delegate))set_delegate;
//superclass pros NSObject
-(NSOutputStream  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSOutputStream  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSOutputStream  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSOutputStream  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSOutputStream  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSOutputStream  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSOutputStream  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSOutputStream  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSOutputStream  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSOutputStream  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSOutputStream  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSOutputStream  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSOutputStream  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSOutputStream  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end