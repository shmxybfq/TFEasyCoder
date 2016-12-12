//
//  UIBezierPath+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIBezierPath (TFEasyCoder)




-(UIBezierPath  *(^)(CGPathRef  CGPath))set_CGPath;
-(UIBezierPath  *(^)(double  lineWidth))set_lineWidth;
-(UIBezierPath  *(^)(int  lineCapStyle))set_lineCapStyle;
-(UIBezierPath  *(^)(int  lineJoinStyle))set_lineJoinStyle;
-(UIBezierPath  *(^)(double  miterLimit))set_miterLimit;
-(UIBezierPath  *(^)(double  flatness))set_flatness;




//superclass pros NSObject
-(UIBezierPath  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIBezierPath  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIBezierPath  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIBezierPath  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIBezierPath  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIBezierPath  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIBezierPath  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIBezierPath  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIBezierPath  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIBezierPath  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIBezierPath  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIBezierPath  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIBezierPath  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIBezierPath  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end