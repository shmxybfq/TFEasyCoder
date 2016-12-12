//
//  UISearchContainerViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISearchContainerViewController (TFEasyCoder)








//superclass pros UIViewController
-(UISearchContainerViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UISearchContainerViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UISearchContainerViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UISearchContainerViewController  *(^)(UIView *  view))set_view;
-(UISearchContainerViewController  *(^)(NSString *  title))set_title;
-(UISearchContainerViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UISearchContainerViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UISearchContainerViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UISearchContainerViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UISearchContainerViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UISearchContainerViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UISearchContainerViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UISearchContainerViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UISearchContainerViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UISearchContainerViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UISearchContainerViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UISearchContainerViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UISearchContainerViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UISearchContainerViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISearchContainerViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISearchContainerViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISearchContainerViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISearchContainerViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISearchContainerViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISearchContainerViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISearchContainerViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISearchContainerViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISearchContainerViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISearchContainerViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISearchContainerViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISearchContainerViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISearchContainerViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end