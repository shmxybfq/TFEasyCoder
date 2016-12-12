//
//  NSException+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSException (TFEasyCoder)









//superclass pros NSObject
-(NSException  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSException  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSException  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSException  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSException  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSException  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSException  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSException  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSException  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSException  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSException  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSException  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSException  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSException  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end