//
//  UIRegion+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIRegion (TFEasyCoder)









//superclass pros NSObject
-(UIRegion  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIRegion  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIRegion  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIRegion  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIRegion  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIRegion  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIRegion  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIRegion  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIRegion  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIRegion  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIRegion  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIRegion  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIRegion  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIRegion  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end