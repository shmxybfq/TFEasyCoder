//
//  UIEvent+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIEvent (TFEasyCoder)









//superclass pros NSObject
-(UIEvent  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIEvent  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIEvent  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIEvent  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIEvent  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIEvent  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIEvent  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIEvent  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIEvent  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIEvent  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIEvent  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIEvent  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIEvent  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIEvent  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end