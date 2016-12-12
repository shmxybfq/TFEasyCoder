//
//  UILocalizedIndexedCollation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UILocalizedIndexedCollation (TFEasyCoder)









//superclass pros NSObject
-(UILocalizedIndexedCollation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UILocalizedIndexedCollation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UILocalizedIndexedCollation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UILocalizedIndexedCollation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UILocalizedIndexedCollation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UILocalizedIndexedCollation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UILocalizedIndexedCollation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UILocalizedIndexedCollation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UILocalizedIndexedCollation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UILocalizedIndexedCollation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UILocalizedIndexedCollation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UILocalizedIndexedCollation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UILocalizedIndexedCollation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UILocalizedIndexedCollation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end