//
//  NSDictionary+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDictionary (TFEasyCoder)









//superclass pros NSObject
-(NSDictionary  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDictionary  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDictionary  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDictionary  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDictionary  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDictionary  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDictionary  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDictionary  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDictionary  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDictionary  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDictionary  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDictionary  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDictionary  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDictionary  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end