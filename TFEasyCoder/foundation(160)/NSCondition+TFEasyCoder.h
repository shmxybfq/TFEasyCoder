//
//  NSCondition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSCondition (TFEasyCoder)





-(NSCondition  *(^)(NSString *  name))set_name;




//superclass pros NSObject
-(NSCondition  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSCondition  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSCondition  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSCondition  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSCondition  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSCondition  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSCondition  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSCondition  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSCondition  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSCondition  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSCondition  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSCondition  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSCondition  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSCondition  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end