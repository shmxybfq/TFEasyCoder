//
//  UIGravityBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIGravityBehavior (TFEasyCoder)





-(UIGravityBehavior  *(^)(CGVector  gravityDirection))set_gravityDirection;
-(UIGravityBehavior  *(^)(double  angle))set_angle;
-(UIGravityBehavior  *(^)(double  magnitude))set_magnitude;




//superclass pros UIDynamicBehavior
//superclass pros NSObject
-(UIGravityBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIGravityBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIGravityBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIGravityBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIGravityBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIGravityBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIGravityBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIGravityBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIGravityBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIGravityBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIGravityBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIGravityBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIGravityBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIGravityBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end