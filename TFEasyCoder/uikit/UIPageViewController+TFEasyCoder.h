//
//  UIPageViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPageViewController (TFEasyCoder)





-(UIPageViewController  *(^)(id<UIPageViewControllerDelegate>  delegate))set_delegate;
-(UIPageViewController  *(^)(id<UIPageViewControllerDataSource>  dataSource))set_dataSource;
-(UIPageViewController  *(^)(BOOL  doubleSided))set_doubleSided;




//superclass pros UIViewController
-(UIPageViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIPageViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIPageViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIPageViewController  *(^)(UIView *  view))set_view;
-(UIPageViewController  *(^)(NSString *  title))set_title;
-(UIPageViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIPageViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIPageViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIPageViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIPageViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIPageViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIPageViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIPageViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIPageViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIPageViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIPageViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIPageViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UIPageViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIPageViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPageViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPageViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPageViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPageViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPageViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPageViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPageViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPageViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPageViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPageViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPageViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPageViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPageViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end