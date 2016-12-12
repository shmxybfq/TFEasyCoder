//
//  UIBlurEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIBlurEffect (TFEasyCoder)









//superclass pros UIVisualEffect
//superclass pros NSObject
-(UIBlurEffect  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIBlurEffect  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIBlurEffect  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIBlurEffect  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIBlurEffect  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIBlurEffect  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIBlurEffect  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIBlurEffect  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIBlurEffect  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIBlurEffect  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIBlurEffect  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIBlurEffect  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIBlurEffect  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIBlurEffect  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end