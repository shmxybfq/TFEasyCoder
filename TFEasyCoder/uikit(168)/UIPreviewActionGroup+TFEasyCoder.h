//
//  UIPreviewActionGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPreviewActionGroup (TFEasyCoder)









//superclass pros NSObject
-(UIPreviewActionGroup  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPreviewActionGroup  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPreviewActionGroup  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPreviewActionGroup  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPreviewActionGroup  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPreviewActionGroup  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPreviewActionGroup  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPreviewActionGroup  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPreviewActionGroup  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPreviewActionGroup  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPreviewActionGroup  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPreviewActionGroup  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPreviewActionGroup  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPreviewActionGroup  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end