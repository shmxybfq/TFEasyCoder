//
//  UISplitViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISplitViewController (TFEasyCoder)





-(UISplitViewController  *(^)(NSArray *  viewControllers))set_viewControllers;
-(UISplitViewController  *(^)(id<UISplitViewControllerDelegate>   delegate))set_delegate;
-(UISplitViewController  *(^)(BOOL  presentsWithGesture))set_presentsWithGesture;
-(UISplitViewController  *(^)(long long  preferredDisplayMode))set_preferredDisplayMode;
-(UISplitViewController  *(^)(double  preferredPrimaryColumnWidthFraction))set_preferredPrimaryColumnWidthFraction;
-(UISplitViewController  *(^)(double  minimumPrimaryColumnWidth))set_minimumPrimaryColumnWidth;
-(UISplitViewController  *(^)(double  maximumPrimaryColumnWidth))set_maximumPrimaryColumnWidth;





//superclass pros UIViewController
-(UISplitViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UISplitViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UISplitViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UISplitViewController  *(^)(UIView *  view))set_view;
-(UISplitViewController  *(^)(NSString *  title))set_title;
-(UISplitViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UISplitViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UISplitViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UISplitViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UISplitViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UISplitViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UISplitViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UISplitViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UISplitViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UISplitViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UISplitViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UISplitViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UISplitViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UISplitViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISplitViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISplitViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISplitViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISplitViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISplitViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISplitViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISplitViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISplitViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISplitViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISplitViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISplitViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISplitViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISplitViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end