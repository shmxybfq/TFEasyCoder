//
//  NSTimeZone+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSTimeZone (TFEasyCoder)









//superclass pros NSObject
-(NSTimeZone  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSTimeZone  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSTimeZone  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSTimeZone  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSTimeZone  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSTimeZone  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSTimeZone  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSTimeZone  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSTimeZone  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSTimeZone  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSTimeZone  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSTimeZone  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSTimeZone  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSTimeZone  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end