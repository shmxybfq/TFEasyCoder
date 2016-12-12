//
//  NSLayoutDimension+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSLayoutDimension (TFEasyCoder)









//superclass pros NSLayoutAnchor
//superclass pros NSObject
-(NSLayoutDimension  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLayoutDimension  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLayoutDimension  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLayoutDimension  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLayoutDimension  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLayoutDimension  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLayoutDimension  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLayoutDimension  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLayoutDimension  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLayoutDimension  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLayoutDimension  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLayoutDimension  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLayoutDimension  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLayoutDimension  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end