//
//  UIStoryboardSegue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIStoryboardSegue (TFEasyCoder)









//superclass pros NSObject
-(UIStoryboardSegue  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIStoryboardSegue  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIStoryboardSegue  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIStoryboardSegue  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIStoryboardSegue  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIStoryboardSegue  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIStoryboardSegue  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIStoryboardSegue  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIStoryboardSegue  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIStoryboardSegue  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIStoryboardSegue  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIStoryboardSegue  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIStoryboardSegue  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIStoryboardSegue  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end