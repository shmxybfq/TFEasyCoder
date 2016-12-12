//
//  NSData+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSData (TFEasyCoder)









//superclass pros NSObject
-(NSData  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSData  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSData  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSData  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSData  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSData  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSData  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSData  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSData  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSData  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSData  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSData  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSData  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSData  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end