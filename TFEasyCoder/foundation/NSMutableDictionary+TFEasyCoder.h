//
//  NSMutableDictionary+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMutableDictionary (TFEasyCoder)









//superclass pros NSDictionary
//superclass pros NSObject
-(NSMutableDictionary  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableDictionary  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableDictionary  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableDictionary  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableDictionary  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableDictionary  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableDictionary  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableDictionary  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableDictionary  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableDictionary  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableDictionary  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableDictionary  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableDictionary  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableDictionary  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end