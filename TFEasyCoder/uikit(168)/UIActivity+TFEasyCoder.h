//
//  UIActivity+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIActivity (TFEasyCoder)









//superclass pros NSObject
-(UIActivity  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIActivity  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIActivity  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIActivity  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIActivity  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIActivity  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIActivity  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIActivity  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIActivity  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIActivity  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIActivity  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIActivity  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIActivity  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIActivity  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end