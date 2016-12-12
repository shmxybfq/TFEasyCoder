//
//  NSPointerFunctions+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSPointerFunctions (TFEasyCoder)





-(NSPointerFunctions  *(^)(BOOL  usesStrongWriteBarrier))set_usesStrongWriteBarrier;
-(NSPointerFunctions  *(^)(BOOL  usesWeakReadAndWriteBarriers))set_usesWeakReadAndWriteBarriers;





//superclass pros NSObject
-(NSPointerFunctions  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSPointerFunctions  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSPointerFunctions  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSPointerFunctions  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSPointerFunctions  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSPointerFunctions  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSPointerFunctions  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSPointerFunctions  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSPointerFunctions  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSPointerFunctions  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSPointerFunctions  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSPointerFunctions  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSPointerFunctions  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSPointerFunctions  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end