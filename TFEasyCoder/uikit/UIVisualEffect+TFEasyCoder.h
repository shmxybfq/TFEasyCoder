//
//  UIVisualEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIVisualEffect (TFEasyCoder)









//superclass pros NSObject
-(UIVisualEffect  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIVisualEffect  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIVisualEffect  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIVisualEffect  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIVisualEffect  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIVisualEffect  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIVisualEffect  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIVisualEffect  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIVisualEffect  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIVisualEffect  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIVisualEffect  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIVisualEffect  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIVisualEffect  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIVisualEffect  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end