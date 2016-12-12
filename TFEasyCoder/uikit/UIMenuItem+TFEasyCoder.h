//
//  UIMenuItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIMenuItem (TFEasyCoder)





-(UIMenuItem  *(^)(NSString *  title))set_title;
-(UIMenuItem  *(^)(SEL  action))set_action;




//superclass pros NSObject
-(UIMenuItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIMenuItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIMenuItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIMenuItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIMenuItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIMenuItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIMenuItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIMenuItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIMenuItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIMenuItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIMenuItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIMenuItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIMenuItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIMenuItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end