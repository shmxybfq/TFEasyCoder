//
//  UISnapBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISnapBehavior (TFEasyCoder)





-(UISnapBehavior  *(^)(CGPoint  snapPoint))set_snapPoint;
-(UISnapBehavior  *(^)(double  damping))set_damping;




//superclass pros UIDynamicBehavior
//superclass pros NSObject
-(UISnapBehavior  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISnapBehavior  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISnapBehavior  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISnapBehavior  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISnapBehavior  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISnapBehavior  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISnapBehavior  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISnapBehavior  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISnapBehavior  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISnapBehavior  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISnapBehavior  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISnapBehavior  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISnapBehavior  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISnapBehavior  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end