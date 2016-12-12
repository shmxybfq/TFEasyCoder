//
//  UIReferenceLibraryViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIReferenceLibraryViewController (TFEasyCoder)









//superclass pros UIViewController
-(UIReferenceLibraryViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIReferenceLibraryViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIReferenceLibraryViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIReferenceLibraryViewController  *(^)(UIView *  view))set_view;
-(UIReferenceLibraryViewController  *(^)(NSString *  title))set_title;
-(UIReferenceLibraryViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIReferenceLibraryViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIReferenceLibraryViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIReferenceLibraryViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIReferenceLibraryViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIReferenceLibraryViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIReferenceLibraryViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIReferenceLibraryViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIReferenceLibraryViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIReferenceLibraryViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIReferenceLibraryViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIReferenceLibraryViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UIReferenceLibraryViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIReferenceLibraryViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIReferenceLibraryViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIReferenceLibraryViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIReferenceLibraryViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIReferenceLibraryViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIReferenceLibraryViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIReferenceLibraryViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIReferenceLibraryViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIReferenceLibraryViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIReferenceLibraryViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIReferenceLibraryViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIReferenceLibraryViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIReferenceLibraryViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIReferenceLibraryViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end