//
//  UIVideoEditorController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIVideoEditorController (TFEasyCoder)





-(UIVideoEditorController  *(^)(id   delegate))set_delegate;
-(UIVideoEditorController  *(^)(NSString *  videoPath))set_videoPath;
-(UIVideoEditorController  *(^)(double  videoMaximumDuration))set_videoMaximumDuration;
-(UIVideoEditorController  *(^)(long long  videoQuality))set_videoQuality;




//superclass pros UINavigationController
-(UIVideoEditorController  *(^)(NSArray *  viewControllers))set_viewControllers;
-(UIVideoEditorController  *(^)(BOOL  navigationBarHidden))set_navigationBarHidden;
-(UIVideoEditorController  *(^)(BOOL  toolbarHidden))set_toolbarHidden;
//TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,id<UINavigationControllerDelegate>  ,delegate)
-(UIVideoEditorController  *(^)(BOOL  hidesBarsWhenKeyboardAppears))set_hidesBarsWhenKeyboardAppears;
-(UIVideoEditorController  *(^)(BOOL  hidesBarsOnSwipe))set_hidesBarsOnSwipe;
-(UIVideoEditorController  *(^)(BOOL  hidesBarsWhenVerticallyCompact))set_hidesBarsWhenVerticallyCompact;
-(UIVideoEditorController  *(^)(BOOL  hidesBarsOnTap))set_hidesBarsOnTap;
//superclass pros UIViewController
-(UIVideoEditorController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIVideoEditorController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIVideoEditorController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIVideoEditorController  *(^)(UIView *  view))set_view;
-(UIVideoEditorController  *(^)(NSString *  title))set_title;
-(UIVideoEditorController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIVideoEditorController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIVideoEditorController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIVideoEditorController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIVideoEditorController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIVideoEditorController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIVideoEditorController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIVideoEditorController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIVideoEditorController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIVideoEditorController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIVideoEditorController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIVideoEditorController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UIVideoEditorController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIVideoEditorController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIVideoEditorController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIVideoEditorController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIVideoEditorController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIVideoEditorController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIVideoEditorController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIVideoEditorController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIVideoEditorController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIVideoEditorController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIVideoEditorController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIVideoEditorController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIVideoEditorController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIVideoEditorController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIVideoEditorController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end