//
//  CAMediaTimingFunction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CAMediaTimingFunction (TFEasyCoder)









//superclass pros NSObject
-(CAMediaTimingFunction  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CAMediaTimingFunction  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CAMediaTimingFunction  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CAMediaTimingFunction  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CAMediaTimingFunction  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CAMediaTimingFunction  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CAMediaTimingFunction  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CAMediaTimingFunction  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CAMediaTimingFunction  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CAMediaTimingFunction  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CAMediaTimingFunction  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CAMediaTimingFunction  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CAMediaTimingFunction  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CAMediaTimingFunction  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end