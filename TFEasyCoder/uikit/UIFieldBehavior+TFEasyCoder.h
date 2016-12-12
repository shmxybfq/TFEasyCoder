//
//  UIFieldBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIFieldBehavior (TFEasyCoder)





-(UIFieldBehavior  *(^)(CGPoint  position))set_position;
-(UIFieldBehavior  *(^)(double  strength))set_strength;
-(UIFieldBehavior  *(^)(double  falloff))set_falloff;
-(UIFieldBehavior  *(^)(double  minimumRadius))set_minimumRadius;
-(UIFieldBehavior  *(^)(CGVector  direction))set_direction;
-(UIFieldBehavior  *(^)(double  smoothness))set_smoothness;
-(UIFieldBehavior  *(^)(double  animationSpeed))set_animationSpeed;




//superclass pros UIDynamicBehavior
//superclass pros NSObject
-(UIFieldBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIFieldBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIFieldBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIFieldBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIFieldBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIFieldBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIFieldBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIFieldBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIFieldBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIFieldBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIFieldBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIFieldBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIFieldBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIFieldBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end