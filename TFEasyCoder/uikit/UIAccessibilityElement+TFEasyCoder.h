//
//  UIAccessibilityElement+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIAccessibilityElement (TFEasyCoder)





-(UIAccessibilityElement  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIAccessibilityElement  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIAccessibilityElement  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIAccessibilityElement  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIAccessibilityElement  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIAccessibilityElement  *(^)(NSString *  accessibilityIdentifier))set_accessibilityIdentifier;




//superclass pros NSObject
-(UIAccessibilityElement  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIAccessibilityElement  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
//TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,BOOL,isAccessibilityElement)
//TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityLabel)
//TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityHint)
//TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityValue)
//TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,unsigned long long,accessibilityTraits)
-(UIAccessibilityElement  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIAccessibilityElement  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIAccessibilityElement  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIAccessibilityElement  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIAccessibilityElement  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIAccessibilityElement  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIAccessibilityElement  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end