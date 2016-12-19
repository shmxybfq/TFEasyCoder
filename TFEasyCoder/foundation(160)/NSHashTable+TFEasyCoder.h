//
//  NSHashTable+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSHashTable (TFEasyCoder)









//superclass pros NSObject
-(NSHashTable  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSHashTable  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSHashTable  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSHashTable  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSHashTable  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSHashTable  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSHashTable  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSHashTable  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSHashTable  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSHashTable  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSHashTable  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSHashTable  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSHashTable  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSHashTable  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end