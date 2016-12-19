//
//  NSValueTransformer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSValueTransformer (TFEasyCoder)









//superclass pros NSObject
-(NSValueTransformer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSValueTransformer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSValueTransformer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSValueTransformer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSValueTransformer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSValueTransformer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSValueTransformer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSValueTransformer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSValueTransformer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSValueTransformer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSValueTransformer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSValueTransformer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSValueTransformer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSValueTransformer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end