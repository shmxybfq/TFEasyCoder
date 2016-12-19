//
//  NSPropertyListSerialization+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSPropertyListSerialization (TFEasyCoder)









//superclass pros NSObject
-(NSPropertyListSerialization  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSPropertyListSerialization  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSPropertyListSerialization  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSPropertyListSerialization  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSPropertyListSerialization  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSPropertyListSerialization  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSPropertyListSerialization  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSPropertyListSerialization  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSPropertyListSerialization  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSPropertyListSerialization  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSPropertyListSerialization  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSPropertyListSerialization  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSPropertyListSerialization  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSPropertyListSerialization  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end