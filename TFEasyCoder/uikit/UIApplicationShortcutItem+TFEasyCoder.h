//
//  UIApplicationShortcutItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIApplicationShortcutItemEasyCoderBlock) (UIApplicationShortcutItem * ins);

@interface UIApplicationShortcutItem (TFEasyCoder)

+( UIApplicationShortcutItem *)easyCoder:(UIApplicationShortcutItemEasyCoderBlock)block;
-(UIApplicationShortcutItem *)easyCoder:(UIApplicationShortcutItemEasyCoderBlock)block;






//superclass pros NSObject
-(UIApplicationShortcutItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIApplicationShortcutItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIApplicationShortcutItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIApplicationShortcutItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIApplicationShortcutItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIApplicationShortcutItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIApplicationShortcutItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIApplicationShortcutItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIApplicationShortcutItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIApplicationShortcutItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIApplicationShortcutItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIApplicationShortcutItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIApplicationShortcutItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIApplicationShortcutItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIApplicationShortcutItem *(^)(id value,NSString *key))set_ValueKey;


@end