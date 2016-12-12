//
//  NSExtensionContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSExtensionContext (TFEasyCoder)









//superclass pros NSObject
-(NSExtensionContext  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSExtensionContext  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSExtensionContext  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSExtensionContext  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSExtensionContext  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSExtensionContext  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSExtensionContext  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSExtensionContext  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSExtensionContext  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSExtensionContext  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSExtensionContext  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSExtensionContext  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSExtensionContext  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSExtensionContext  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end