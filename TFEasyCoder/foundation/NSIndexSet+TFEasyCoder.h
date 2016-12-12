//
//  NSIndexSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSIndexSet (TFEasyCoder)









//superclass pros NSObject
-(NSIndexSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSIndexSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSIndexSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSIndexSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSIndexSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSIndexSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSIndexSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSIndexSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSIndexSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSIndexSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSIndexSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSIndexSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSIndexSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSIndexSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end