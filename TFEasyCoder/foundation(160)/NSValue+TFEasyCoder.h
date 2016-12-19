//
//  NSValue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSValue (TFEasyCoder)









//superclass pros NSObject
-(NSValue  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSValue  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSValue  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSValue  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSValue  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSValue  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSValue  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSValue  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSValue  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSValue  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSValue  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSValue  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSValue  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSValue  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end