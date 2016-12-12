//
//  NSMutableOrderedSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMutableOrderedSet (TFEasyCoder)









//superclass pros NSOrderedSet
//superclass pros NSObject
-(NSMutableOrderedSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableOrderedSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableOrderedSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableOrderedSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableOrderedSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableOrderedSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableOrderedSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableOrderedSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableOrderedSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableOrderedSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableOrderedSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableOrderedSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableOrderedSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableOrderedSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end