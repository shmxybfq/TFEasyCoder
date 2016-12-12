//
//  UITabBar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITabBar (TFEasyCoder)





-(UITabBar  *(^)(id<UITabBarDelegate>   delegate))set_delegate;
-(UITabBar  *(^)(NSArray *  items))set_items;
-(UITabBar  *(^)(UITabBarItem *  selectedItem))set_selectedItem;
-(UITabBar  *(^)(UIColor *  tintColor))set_tintColor;
-(UITabBar  *(^)(UIColor *  barTintColor))set_barTintColor;
-(UITabBar  *(^)(UIColor *  selectedImageTintColor))set_selectedImageTintColor;
-(UITabBar  *(^)(UIImage *  backgroundImage))set_backgroundImage;
-(UITabBar  *(^)(UIImage *  selectionIndicatorImage))set_selectionIndicatorImage;
-(UITabBar  *(^)(UIImage *  shadowImage))set_shadowImage;
-(UITabBar  *(^)(long long  itemPositioning))set_itemPositioning;
-(UITabBar  *(^)(double  itemWidth))set_itemWidth;
-(UITabBar  *(^)(double  itemSpacing))set_itemSpacing;
-(UITabBar  *(^)(long long  barStyle))set_barStyle;
-(UITabBar  *(^)(BOOL  translucent))set_translucent;





//superclass pros UIView
-(UITabBar  *(^)(UIView *  maskView))set_maskView;
-(UITabBar  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UITabBar  *(^)(long long  tag))set_tag;
-(UITabBar  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UITabBar  *(^)(CGPoint  center))set_center;
-(UITabBar  *(^)(CGRect  frame))set_frame;
-(UITabBar  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UITabBar  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UITabBar  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITabBar  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITabBar  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITabBar  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITabBar  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITabBar  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITabBar  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITabBar  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITabBar  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITabBar  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITabBar  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITabBar  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITabBar  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITabBar  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
