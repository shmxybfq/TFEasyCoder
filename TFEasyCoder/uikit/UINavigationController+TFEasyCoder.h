//
//  UINavigationController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UINavigationController (TFEasyCoder)





-(UINavigationController  *(^)(NSArray *  viewControllers))set_viewControllers;
-(UINavigationController  *(^)(BOOL  navigationBarHidden))set_navigationBarHidden;
-(UINavigationController  *(^)(BOOL  toolbarHidden))set_toolbarHidden;
-(UINavigationController  *(^)(id<UINavigationControllerDelegate>    delegate))set_delegate;
-(UINavigationController  *(^)(BOOL  hidesBarsWhenKeyboardAppears))set_hidesBarsWhenKeyboardAppears;
-(UINavigationController  *(^)(BOOL  hidesBarsOnSwipe))set_hidesBarsOnSwipe;
-(UINavigationController  *(^)(BOOL  hidesBarsWhenVerticallyCompact))set_hidesBarsWhenVerticallyCompact;
-(UINavigationController  *(^)(BOOL  hidesBarsOnTap))set_hidesBarsOnTap;





//superclass pros UIViewController
-(UINavigationController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UINavigationController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UINavigationController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UINavigationController  *(^)(UIView *  view))set_view;
-(UINavigationController  *(^)(NSString *  title))set_title;
-(UINavigationController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UINavigationController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UINavigationController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UINavigationController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UINavigationController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UINavigationController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UINavigationController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UINavigationController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UINavigationController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UINavigationController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UINavigationController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UINavigationController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UINavigationController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UINavigationController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UINavigationController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UINavigationController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UINavigationController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UINavigationController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UINavigationController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UINavigationController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UINavigationController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UINavigationController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UINavigationController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UINavigationController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UINavigationController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UINavigationController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UINavigationController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end