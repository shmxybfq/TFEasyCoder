//
//  NSCharacterSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSCharacterSet (TFEasyCoder)









//superclass pros NSObject
-(NSCharacterSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSCharacterSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSCharacterSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSCharacterSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSCharacterSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSCharacterSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSCharacterSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSCharacterSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSCharacterSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSCharacterSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSCharacterSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSCharacterSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSCharacterSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSCharacterSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end