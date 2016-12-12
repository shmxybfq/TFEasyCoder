//
//  NSNull+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSNull (TFEasyCoder)









//superclass pros NSObject
-(NSNull  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSNull  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSNull  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSNull  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSNull  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSNull  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSNull  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSNull  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSNull  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSNull  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSNull  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSNull  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSNull  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSNull  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end