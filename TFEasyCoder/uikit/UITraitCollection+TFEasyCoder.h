//
//  UITraitCollection+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITraitCollection (TFEasyCoder)









//superclass pros NSObject
-(UITraitCollection  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITraitCollection  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITraitCollection  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITraitCollection  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITraitCollection  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITraitCollection  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITraitCollection  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITraitCollection  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITraitCollection  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITraitCollection  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITraitCollection  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITraitCollection  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITraitCollection  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITraitCollection  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end