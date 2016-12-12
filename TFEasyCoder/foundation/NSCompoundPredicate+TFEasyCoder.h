//
//  NSCompoundPredicate+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSCompoundPredicate (TFEasyCoder)









//superclass pros NSPredicate
//superclass pros NSObject
-(NSCompoundPredicate  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSCompoundPredicate  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSCompoundPredicate  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSCompoundPredicate  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSCompoundPredicate  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSCompoundPredicate  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSCompoundPredicate  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSCompoundPredicate  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSCompoundPredicate  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSCompoundPredicate  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSCompoundPredicate  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSCompoundPredicate  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSCompoundPredicate  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSCompoundPredicate  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end