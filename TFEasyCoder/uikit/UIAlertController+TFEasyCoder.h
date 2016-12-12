//
//  UIAlertController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIAlertController (TFEasyCoder)





-(UIAlertController  *(^)(UIAlertAction *  preferredAction))set_preferredAction;
-(UIAlertController  *(^)(NSString *  title))set_title;
-(UIAlertController  *(^)(NSString *  message))set_message;





//superclass pros UIViewController
-(UIAlertController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIAlertController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIAlertController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIAlertController  *(^)(UIView *  view))set_view;
//TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,title)
-(UIAlertController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIAlertController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIAlertController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIAlertController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIAlertController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIAlertController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIAlertController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIAlertController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIAlertController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIAlertController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIAlertController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIAlertController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UIAlertController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIAlertController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIAlertController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIAlertController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIAlertController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIAlertController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIAlertController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIAlertController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIAlertController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIAlertController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIAlertController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIAlertController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIAlertController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIAlertController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIAlertController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
