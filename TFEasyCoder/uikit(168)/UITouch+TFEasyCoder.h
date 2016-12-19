//
//  UITouch+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITouch (TFEasyCoder)









//superclass pros NSObject
-(UITouch  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITouch  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITouch  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITouch  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITouch  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITouch  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITouch  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITouch  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITouch  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITouch  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITouch  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITouch  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITouch  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITouch  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end