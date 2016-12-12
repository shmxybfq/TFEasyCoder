//
//  UIActivityViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIActivityViewController (TFEasyCoder)




-(UIActivityViewController  *(^)(NSArray *  excludedActivityTypes))set_excludedActivityTypes;





//superclass pros UIViewController
-(UIActivityViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIActivityViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIActivityViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIActivityViewController  *(^)(UIView *  view))set_view;
-(UIActivityViewController  *(^)(NSString *  title))set_title;
-(UIActivityViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIActivityViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIActivityViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIActivityViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIActivityViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIActivityViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIActivityViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIActivityViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIActivityViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIActivityViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIActivityViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIActivityViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UIActivityViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIActivityViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIActivityViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIActivityViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIActivityViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIActivityViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIActivityViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIActivityViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIActivityViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIActivityViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIActivityViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIActivityViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIActivityViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIActivityViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIActivityViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end