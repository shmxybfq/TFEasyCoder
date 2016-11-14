//
//  UIFocusAnimationCoordinator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIFocusAnimationCoordinatorEasyCoderBlock) (UIFocusAnimationCoordinator * ins);

@interface UIFocusAnimationCoordinator (TFEasyCoder)

+( UIFocusAnimationCoordinator *)easyCoder:(UIFocusAnimationCoordinatorEasyCoderBlock)block;
-(UIFocusAnimationCoordinator *)easyCoder:(UIFocusAnimationCoordinatorEasyCoderBlock)block;






//superclass pros NSObject
-(UIFocusAnimationCoordinator  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIFocusAnimationCoordinator  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIFocusAnimationCoordinator  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIFocusAnimationCoordinator  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIFocusAnimationCoordinator  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIFocusAnimationCoordinator  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIFocusAnimationCoordinator  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIFocusAnimationCoordinator  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIFocusAnimationCoordinator  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIFocusAnimationCoordinator  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIFocusAnimationCoordinator  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIFocusAnimationCoordinator  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIFocusAnimationCoordinator  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIFocusAnimationCoordinator  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIFocusAnimationCoordinator *(^)(id value,NSString *key))set_ValueKey;


@end