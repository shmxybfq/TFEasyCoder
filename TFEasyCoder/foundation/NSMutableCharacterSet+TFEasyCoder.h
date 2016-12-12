//
//  NSMutableCharacterSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMutableCharacterSet (TFEasyCoder)









//superclass pros NSCharacterSet
//superclass pros NSObject
-(NSMutableCharacterSet  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableCharacterSet  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableCharacterSet  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableCharacterSet  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableCharacterSet  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableCharacterSet  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableCharacterSet  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableCharacterSet  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableCharacterSet  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableCharacterSet  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableCharacterSet  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableCharacterSet  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableCharacterSet  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableCharacterSet  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end