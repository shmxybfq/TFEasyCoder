//
//  NSSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSSet (TFEasyCoder)









//superclass pros NSObject
-(NSSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end