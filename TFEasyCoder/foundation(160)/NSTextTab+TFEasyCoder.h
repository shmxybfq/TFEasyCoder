//
//  NSTextTab+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSTextTab (TFEasyCoder)









//superclass pros NSObject
-(NSTextTab  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSTextTab  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSTextTab  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSTextTab  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSTextTab  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSTextTab  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSTextTab  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSTextTab  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSTextTab  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSTextTab  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSTextTab  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSTextTab  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSTextTab  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSTextTab  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end