//
//  UITabBarController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITabBarController (TFEasyCoder)





-(UITabBarController  *(^)(NSArray *  viewControllers))set_viewControllers;
-(UITabBarController  *(^)(UIViewController *  selectedViewController))set_selectedViewController;
-(UITabBarController  *(^)(unsigned long long  selectedIndex))set_selectedIndex;
-(UITabBarController  *(^)(NSArray *  customizableViewControllers))set_customizableViewControllers;
-(UITabBarController  *(^)(id<UITabBarControllerDelegate>   delegate))set_delegate;





//superclass pros UIViewController
-(UITabBarController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UITabBarController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UITabBarController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UITabBarController  *(^)(UIView *  view))set_view;
-(UITabBarController  *(^)(NSString *  title))set_title;
-(UITabBarController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UITabBarController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UITabBarController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UITabBarController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UITabBarController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UITabBarController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UITabBarController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UITabBarController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UITabBarController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UITabBarController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UITabBarController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UITabBarController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UITabBarController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UITabBarController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITabBarController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITabBarController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITabBarController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITabBarController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITabBarController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITabBarController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITabBarController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITabBarController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITabBarController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITabBarController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITabBarController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITabBarController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITabBarController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end