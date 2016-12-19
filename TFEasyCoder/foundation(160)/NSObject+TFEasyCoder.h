//
//  NSObject+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSObject (TFEasyCoder)




-(NSObject  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSObject  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSObject  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSObject  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSObject  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSObject  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSObject  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSObject  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSObject  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSObject  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSObject  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSObject  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSObject  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSObject  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;






@end