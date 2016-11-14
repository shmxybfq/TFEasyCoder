//
//  UIPercentDrivenInteractiveTransition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIPercentDrivenInteractiveTransitionEasyCoderBlock) (UIPercentDrivenInteractiveTransition * ins);

@interface UIPercentDrivenInteractiveTransition (TFEasyCoder)

+( UIPercentDrivenInteractiveTransition *)easyCoder:(UIPercentDrivenInteractiveTransitionEasyCoderBlock)block;
-(UIPercentDrivenInteractiveTransition *)easyCoder:(UIPercentDrivenInteractiveTransitionEasyCoderBlock)block;


-(UIPercentDrivenInteractiveTransition  *(^)(double  completionSpeed))set_completionSpeed;
-(UIPercentDrivenInteractiveTransition  *(^)(long long  completionCurve))set_completionCurve;




//superclass pros NSObject
-(UIPercentDrivenInteractiveTransition  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPercentDrivenInteractiveTransition  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPercentDrivenInteractiveTransition  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPercentDrivenInteractiveTransition  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPercentDrivenInteractiveTransition  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPercentDrivenInteractiveTransition  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPercentDrivenInteractiveTransition  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPercentDrivenInteractiveTransition  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPercentDrivenInteractiveTransition  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPercentDrivenInteractiveTransition  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPercentDrivenInteractiveTransition  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPercentDrivenInteractiveTransition  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPercentDrivenInteractiveTransition  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPercentDrivenInteractiveTransition  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIPercentDrivenInteractiveTransition *(^)(id value,NSString *key))set_ValueKey;


@end