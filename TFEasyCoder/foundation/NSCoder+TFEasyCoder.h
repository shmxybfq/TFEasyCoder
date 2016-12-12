//
//  NSCoder+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSCoder (TFEasyCoder)









//superclass pros NSObject
-(NSCoder  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSCoder  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSCoder  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSCoder  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSCoder  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSCoder  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSCoder  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSCoder  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSCoder  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSCoder  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSCoder  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSCoder  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSCoder  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSCoder  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end