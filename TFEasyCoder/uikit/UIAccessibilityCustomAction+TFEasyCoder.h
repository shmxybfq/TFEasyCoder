//
//  UIAccessibilityCustomAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIAccessibilityCustomAction (TFEasyCoder)





-(UIAccessibilityCustomAction  *(^)(NSString *  name))set_name;
-(UIAccessibilityCustomAction  *(^)(SEL  selector))set_selector;




//superclass pros NSObject
-(UIAccessibilityCustomAction  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIAccessibilityCustomAction  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIAccessibilityCustomAction  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIAccessibilityCustomAction  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIAccessibilityCustomAction  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIAccessibilityCustomAction  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIAccessibilityCustomAction  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIAccessibilityCustomAction  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIAccessibilityCustomAction  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIAccessibilityCustomAction  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIAccessibilityCustomAction  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIAccessibilityCustomAction  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIAccessibilityCustomAction  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIAccessibilityCustomAction  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end