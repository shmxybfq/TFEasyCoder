//
//  UIMenuController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIMenuController (TFEasyCoder)





-(UIMenuController  *(^)(BOOL  menuVisible))set_menuVisible;
-(UIMenuController  *(^)(long long  arrowDirection))set_arrowDirection;
-(UIMenuController  *(^)(NSArray *  menuItems))set_menuItems;




//superclass pros NSObject
-(UIMenuController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIMenuController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIMenuController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIMenuController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIMenuController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIMenuController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIMenuController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIMenuController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIMenuController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIMenuController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIMenuController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIMenuController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIMenuController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIMenuController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end