//
//  NSError+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSError (TFEasyCoder)









//superclass pros NSObject
-(NSError  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSError  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSError  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSError  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSError  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSError  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSError  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSError  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSError  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSError  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSError  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSError  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSError  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSError  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end