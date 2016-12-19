//
//  NSLayoutConstraint+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSLayoutConstraint (TFEasyCoder)




-(NSLayoutConstraint  *(^)(float  priority))set_priority;
-(NSLayoutConstraint  *(^)(BOOL  shouldBeArchived))set_shouldBeArchived;
-(NSLayoutConstraint  *(^)(double  constant))set_constant;
-(NSLayoutConstraint  *(^)(BOOL  active))set_active;
-(NSLayoutConstraint  *(^)(NSString *  identifier))set_identifier;




//superclass pros NSObject
-(NSLayoutConstraint  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLayoutConstraint  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLayoutConstraint  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLayoutConstraint  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLayoutConstraint  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLayoutConstraint  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLayoutConstraint  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLayoutConstraint  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLayoutConstraint  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLayoutConstraint  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLayoutConstraint  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLayoutConstraint  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLayoutConstraint  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLayoutConstraint  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end