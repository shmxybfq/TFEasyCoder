//
//  NSStringDrawingContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSStringDrawingContext (TFEasyCoder)




-(NSStringDrawingContext  *(^)(double  minimumTrackingAdjustment))set_minimumTrackingAdjustment;
-(NSStringDrawingContext  *(^)(double  minimumScaleFactor))set_minimumScaleFactor;




//superclass pros NSObject
-(NSStringDrawingContext  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSStringDrawingContext  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSStringDrawingContext  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSStringDrawingContext  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSStringDrawingContext  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSStringDrawingContext  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSStringDrawingContext  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSStringDrawingContext  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSStringDrawingContext  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSStringDrawingContext  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSStringDrawingContext  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSStringDrawingContext  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSStringDrawingContext  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSStringDrawingContext  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end