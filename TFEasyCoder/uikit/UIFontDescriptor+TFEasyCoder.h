//
//  UIFontDescriptor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIFontDescriptor (TFEasyCoder)









//superclass pros NSObject
-(UIFontDescriptor  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIFontDescriptor  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIFontDescriptor  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIFontDescriptor  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIFontDescriptor  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIFontDescriptor  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIFontDescriptor  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIFontDescriptor  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIFontDescriptor  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIFontDescriptor  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIFontDescriptor  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIFontDescriptor  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIFontDescriptor  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIFontDescriptor  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end