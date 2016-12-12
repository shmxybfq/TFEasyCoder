//
//  NSInvocation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSInvocation (TFEasyCoder)





-(NSInvocation  *(^)(SEL  selector))set_selector;




//superclass pros NSObject
-(NSInvocation  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSInvocation  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSInvocation  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSInvocation  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSInvocation  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSInvocation  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSInvocation  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSInvocation  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSInvocation  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSInvocation  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSInvocation  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSInvocation  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSInvocation  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSInvocation  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end