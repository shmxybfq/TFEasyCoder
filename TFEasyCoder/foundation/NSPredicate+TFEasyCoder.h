//
//  NSPredicate+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSPredicate (TFEasyCoder)









//superclass pros NSObject
-(NSPredicate  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSPredicate  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSPredicate  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSPredicate  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSPredicate  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSPredicate  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSPredicate  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSPredicate  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSPredicate  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSPredicate  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSPredicate  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSPredicate  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSPredicate  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSPredicate  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end