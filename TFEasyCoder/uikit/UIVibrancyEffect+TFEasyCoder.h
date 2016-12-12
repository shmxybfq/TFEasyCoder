//
//  UIVibrancyEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIVibrancyEffect (TFEasyCoder)









//superclass pros UIVisualEffect
//superclass pros NSObject
-(UIVibrancyEffect  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIVibrancyEffect  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIVibrancyEffect  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIVibrancyEffect  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIVibrancyEffect  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIVibrancyEffect  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIVibrancyEffect  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIVibrancyEffect  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIVibrancyEffect  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIVibrancyEffect  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIVibrancyEffect  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIVibrancyEffect  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIVibrancyEffect  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIVibrancyEffect  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end