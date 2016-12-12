//
//  UIScreenMode+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIScreenMode (TFEasyCoder)









//superclass pros NSObject
-(UIScreenMode  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIScreenMode  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIScreenMode  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIScreenMode  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIScreenMode  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIScreenMode  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIScreenMode  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIScreenMode  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIScreenMode  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIScreenMode  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIScreenMode  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIScreenMode  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIScreenMode  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIScreenMode  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end