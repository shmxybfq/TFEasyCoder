//
//  NSString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSString (TFEasyCoder)









//superclass pros NSObject
-(NSString  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSString  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSString  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSString  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSString  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSString  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSString  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSString  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSString  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSString  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSString  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSString  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSString  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSString  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end