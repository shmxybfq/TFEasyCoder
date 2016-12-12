//
//  NSComparisonPredicate+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSComparisonPredicate (TFEasyCoder)









//superclass pros NSPredicate
//superclass pros NSObject
-(NSComparisonPredicate  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSComparisonPredicate  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSComparisonPredicate  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSComparisonPredicate  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSComparisonPredicate  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSComparisonPredicate  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSComparisonPredicate  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSComparisonPredicate  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSComparisonPredicate  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSComparisonPredicate  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSComparisonPredicate  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSComparisonPredicate  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSComparisonPredicate  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSComparisonPredicate  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end