//
//  NSNumber+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSNumber (TFEasyCoder)









//superclass pros NSValue
//superclass pros NSObject
-(NSNumber  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSNumber  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSNumber  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSNumber  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSNumber  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSNumber  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSNumber  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSNumber  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSNumber  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSNumber  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSNumber  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSNumber  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSNumber  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSNumber  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end