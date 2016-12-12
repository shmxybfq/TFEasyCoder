//
//  UIStoryboard+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIStoryboard (TFEasyCoder)









//superclass pros NSObject
-(UIStoryboard  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIStoryboard  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIStoryboard  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIStoryboard  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIStoryboard  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIStoryboard  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIStoryboard  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIStoryboard  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIStoryboard  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIStoryboard  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIStoryboard  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIStoryboard  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIStoryboard  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIStoryboard  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end