//
//  NSFileProviderExtension+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSFileProviderExtension (TFEasyCoder)








//superclass pros NSObject
-(NSFileProviderExtension  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSFileProviderExtension  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSFileProviderExtension  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSFileProviderExtension  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSFileProviderExtension  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSFileProviderExtension  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSFileProviderExtension  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSFileProviderExtension  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSFileProviderExtension  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSFileProviderExtension  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSFileProviderExtension  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSFileProviderExtension  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSFileProviderExtension  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSFileProviderExtension  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end