//
//  NSDate+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDate (TFEasyCoder)









//superclass pros NSObject
-(NSDate  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDate  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDate  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDate  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDate  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDate  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDate  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDate  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDate  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDate  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDate  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDate  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDate  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDate  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end