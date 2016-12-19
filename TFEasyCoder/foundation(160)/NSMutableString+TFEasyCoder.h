//
//  NSMutableString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMutableString (TFEasyCoder)









//superclass pros NSString
//superclass pros NSObject
-(NSMutableString  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMutableString  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMutableString  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMutableString  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMutableString  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMutableString  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMutableString  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMutableString  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMutableString  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMutableString  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMutableString  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMutableString  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMutableString  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMutableString  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end