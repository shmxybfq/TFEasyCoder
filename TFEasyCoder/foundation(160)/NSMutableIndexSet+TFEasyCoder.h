//
//  NSMutableIndexSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMutableIndexSet (TFEasyCoder)









//superclass pros NSIndexSet
//superclass pros NSObject
-(NSMutableIndexSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableIndexSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableIndexSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableIndexSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableIndexSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableIndexSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableIndexSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableIndexSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableIndexSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableIndexSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableIndexSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableIndexSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableIndexSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableIndexSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end