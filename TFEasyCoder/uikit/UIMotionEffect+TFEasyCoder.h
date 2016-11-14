//
//  UIMotionEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIMotionEffectEasyCoderBlock) (UIMotionEffect * ins);

@interface UIMotionEffect (TFEasyCoder)

+( UIMotionEffect *)easyCoder:(UIMotionEffectEasyCoderBlock)block;
-(UIMotionEffect *)easyCoder:(UIMotionEffectEasyCoderBlock)block;






//superclass pros NSObject
-(UIMotionEffect  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIMotionEffect  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIMotionEffect  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIMotionEffect  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIMotionEffect  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIMotionEffect  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIMotionEffect  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIMotionEffect  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIMotionEffect  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIMotionEffect  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIMotionEffect  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIMotionEffect  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIMotionEffect  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIMotionEffect  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIMotionEffect *(^)(id value,NSString *key))set_ValueKey;


@end