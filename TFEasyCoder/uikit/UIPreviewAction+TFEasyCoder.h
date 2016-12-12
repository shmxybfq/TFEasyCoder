//
//  UIPreviewAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPreviewAction (TFEasyCoder)










//superclass pros NSObject
-(UIPreviewAction  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPreviewAction  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPreviewAction  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPreviewAction  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPreviewAction  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPreviewAction  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPreviewAction  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPreviewAction  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPreviewAction  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPreviewAction  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPreviewAction  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPreviewAction  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPreviewAction  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPreviewAction  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end