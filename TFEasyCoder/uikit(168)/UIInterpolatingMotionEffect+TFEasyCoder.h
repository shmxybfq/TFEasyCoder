//
//  UIInterpolatingMotionEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIInterpolatingMotionEffect (TFEasyCoder)









//superclass pros UIMotionEffect
//superclass pros NSObject
-(UIInterpolatingMotionEffect  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIInterpolatingMotionEffect  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIInterpolatingMotionEffect  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIInterpolatingMotionEffect  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIInterpolatingMotionEffect  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIInterpolatingMotionEffect  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIInterpolatingMotionEffect  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIInterpolatingMotionEffect  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIInterpolatingMotionEffect  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIInterpolatingMotionEffect  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIInterpolatingMotionEffect  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIInterpolatingMotionEffect  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIInterpolatingMotionEffect  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIInterpolatingMotionEffect  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end