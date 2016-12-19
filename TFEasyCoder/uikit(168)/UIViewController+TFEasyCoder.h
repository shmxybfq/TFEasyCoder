//
//  UIViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIViewController (TFEasyCoder)




-(UIViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIViewController  *(^)(UIView *  view))set_view;
-(UIViewController  *(^)(NSString *  title))set_title;
-(UIViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;





//superclass pros UIResponder
-(UIViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end