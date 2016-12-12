//
//  UILayoutGuide+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UILayoutGuide (TFEasyCoder)





-(UILayoutGuide  *(^)(UIView *  owningView))set_owningView;
-(UILayoutGuide  *(^)(NSString *  identifier))set_identifier;




//superclass pros NSObject
-(UILayoutGuide  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UILayoutGuide  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UILayoutGuide  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UILayoutGuide  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UILayoutGuide  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UILayoutGuide  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UILayoutGuide  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UILayoutGuide  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UILayoutGuide  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UILayoutGuide  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UILayoutGuide  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UILayoutGuide  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UILayoutGuide  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UILayoutGuide  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end