//
//  UISearchController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISearchController (TFEasyCoder)





-(UISearchController  *(^)(BOOL  active))set_active;
-(UISearchController  *(^)(id<UISearchControllerDelegate>   delegate))set_delegate;
-(UISearchController  *(^)(BOOL  dimsBackgroundDuringPresentation))set_dimsBackgroundDuringPresentation;
-(UISearchController  *(^)(BOOL  obscuresBackgroundDuringPresentation))set_obscuresBackgroundDuringPresentation;
-(UISearchController  *(^)(BOOL  hidesNavigationBarDuringPresentation))set_hidesNavigationBarDuringPresentation;




//superclass pros UIViewController
-(UISearchController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UISearchController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UISearchController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UISearchController  *(^)(UIView *  view))set_view;
-(UISearchController  *(^)(NSString *  title))set_title;
-(UISearchController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UISearchController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UISearchController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UISearchController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UISearchController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UISearchController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UISearchController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UISearchController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UISearchController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UISearchController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UISearchController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UISearchController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UISearchController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UISearchController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISearchController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISearchController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISearchController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISearchController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISearchController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISearchController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISearchController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISearchController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISearchController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISearchController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISearchController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISearchController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISearchController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end