//
//  CAValueFunction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAValueFunction (TFEasyCoder)









//superclass pros NSObject
-(CAValueFunction  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAValueFunction  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAValueFunction  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAValueFunction  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAValueFunction  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAValueFunction  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAValueFunction  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAValueFunction  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAValueFunction  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAValueFunction  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAValueFunction  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAValueFunction  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAValueFunction  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAValueFunction  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end