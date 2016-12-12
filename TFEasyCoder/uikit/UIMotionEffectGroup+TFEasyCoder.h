//
//  UIMotionEffectGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIMotionEffectGroup (TFEasyCoder)





-(UIMotionEffectGroup  *(^)(NSArray *  motionEffects))set_motionEffects;




//superclass pros UIMotionEffect
//superclass pros NSObject
-(UIMotionEffectGroup  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIMotionEffectGroup  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIMotionEffectGroup  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIMotionEffectGroup  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIMotionEffectGroup  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIMotionEffectGroup  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIMotionEffectGroup  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIMotionEffectGroup  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIMotionEffectGroup  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIMotionEffectGroup  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIMotionEffectGroup  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIMotionEffectGroup  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIMotionEffectGroup  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIMotionEffectGroup  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end