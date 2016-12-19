//
//  UIApplicationShortcutIcon+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIApplicationShortcutIcon (TFEasyCoder)








//superclass pros NSObject
-(UIApplicationShortcutIcon  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIApplicationShortcutIcon  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIApplicationShortcutIcon  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIApplicationShortcutIcon  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIApplicationShortcutIcon  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIApplicationShortcutIcon  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIApplicationShortcutIcon  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIApplicationShortcutIcon  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIApplicationShortcutIcon  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIApplicationShortcutIcon  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIApplicationShortcutIcon  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIApplicationShortcutIcon  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIApplicationShortcutIcon  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIApplicationShortcutIcon  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end