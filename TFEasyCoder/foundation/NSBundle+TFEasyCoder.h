//
//  NSBundle+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSBundle (TFEasyCoder)









//superclass pros NSObject
-(NSBundle  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSBundle  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSBundle  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSBundle  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSBundle  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSBundle  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSBundle  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSBundle  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSBundle  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSBundle  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSBundle  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSBundle  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSBundle  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSBundle  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end