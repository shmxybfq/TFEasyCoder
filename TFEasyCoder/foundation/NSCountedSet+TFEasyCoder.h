//
//  NSCountedSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSCountedSet (TFEasyCoder)









//superclass pros NSMutableSet
//superclass pros NSSet
//superclass pros NSObject
-(NSCountedSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSCountedSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSCountedSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSCountedSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSCountedSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSCountedSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSCountedSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSCountedSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSCountedSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSCountedSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSCountedSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSCountedSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSCountedSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSCountedSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end