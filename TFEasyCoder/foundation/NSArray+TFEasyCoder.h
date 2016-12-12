//
//  NSArray+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSArray (TFEasyCoder)









//superclass pros NSObject
-(NSArray  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSArray  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSArray  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSArray  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSArray  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSArray  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSArray  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSArray  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSArray  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSArray  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSArray  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSArray  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSArray  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSArray  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end