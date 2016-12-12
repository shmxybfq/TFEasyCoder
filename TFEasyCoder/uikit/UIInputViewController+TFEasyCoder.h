//
//  UIInputViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIInputViewController (TFEasyCoder)





-(UIInputViewController  *(^)(UIInputView *  inputView))set_inputView;
-(UIInputViewController  *(^)(NSString *  primaryLanguage))set_primaryLanguage;




//superclass pros UIViewController
-(UIInputViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIInputViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIInputViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIInputViewController  *(^)(UIView *  view))set_view;
-(UIInputViewController  *(^)(NSString *  title))set_title;
-(UIInputViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIInputViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIInputViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIInputViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIInputViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIInputViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIInputViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIInputViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIInputViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIInputViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIInputViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIInputViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UIInputViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIInputViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIInputViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIInputViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIInputViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIInputViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIInputViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIInputViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIInputViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIInputViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIInputViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIInputViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIInputViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIInputViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIInputViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end