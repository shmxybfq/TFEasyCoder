//
//  UIFont+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIFont (TFEasyCoder)









//superclass pros NSObject
-(UIFont  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIFont  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIFont  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIFont  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIFont  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIFont  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIFont  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIFont  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIFont  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIFont  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIFont  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIFont  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIFont  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIFont  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end