//
//  NSRegularExpression+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSRegularExpression (TFEasyCoder)









//superclass pros NSObject
-(NSRegularExpression  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSRegularExpression  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSRegularExpression  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSRegularExpression  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSRegularExpression  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSRegularExpression  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSRegularExpression  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSRegularExpression  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSRegularExpression  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSRegularExpression  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSRegularExpression  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSRegularExpression  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSRegularExpression  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSRegularExpression  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end