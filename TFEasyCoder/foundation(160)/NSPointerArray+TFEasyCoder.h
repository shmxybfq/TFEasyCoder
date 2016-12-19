//
//  NSPointerArray+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSPointerArray (TFEasyCoder)





-(NSPointerArray  *(^)(unsigned long long  count))set_count;




//superclass pros NSObject
-(NSPointerArray  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSPointerArray  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSPointerArray  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSPointerArray  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSPointerArray  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSPointerArray  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSPointerArray  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSPointerArray  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSPointerArray  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSPointerArray  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSPointerArray  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSPointerArray  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSPointerArray  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSPointerArray  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end