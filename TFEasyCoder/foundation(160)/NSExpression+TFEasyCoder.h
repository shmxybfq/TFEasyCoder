//
//  NSExpression+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSExpression (TFEasyCoder)









//superclass pros NSObject
-(NSExpression  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSExpression  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSExpression  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSExpression  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSExpression  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSExpression  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSExpression  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSExpression  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSExpression  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSExpression  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSExpression  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSExpression  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSExpression  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSExpression  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end