//
//  UINavigationItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UINavigationItem (TFEasyCoder)





-(UINavigationItem  *(^)(NSString *  title))set_title;
-(UINavigationItem  *(^)(UIView *  titleView))set_titleView;
-(UINavigationItem  *(^)(NSString *  prompt))set_prompt;
-(UINavigationItem  *(^)(UIBarButtonItem *  backBarButtonItem))set_backBarButtonItem;
-(UINavigationItem  *(^)(BOOL  hidesBackButton))set_hidesBackButton;
-(UINavigationItem  *(^)(NSArray *  leftBarButtonItems))set_leftBarButtonItems;
-(UINavigationItem  *(^)(NSArray *  rightBarButtonItems))set_rightBarButtonItems;
-(UINavigationItem  *(^)(BOOL  leftItemsSupplementBackButton))set_leftItemsSupplementBackButton;
-(UINavigationItem  *(^)(UIBarButtonItem *  leftBarButtonItem))set_leftBarButtonItem;
-(UINavigationItem  *(^)(UIBarButtonItem *  rightBarButtonItem))set_rightBarButtonItem;




//superclass pros NSObject
-(UINavigationItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UINavigationItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UINavigationItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UINavigationItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UINavigationItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UINavigationItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UINavigationItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UINavigationItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UINavigationItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UINavigationItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UINavigationItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UINavigationItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UINavigationItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UINavigationItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end