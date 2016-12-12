//
//  UIDocumentPickerExtensionViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIDocumentPickerExtensionViewController (TFEasyCoder)








//superclass pros UIViewController
-(UIDocumentPickerExtensionViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIDocumentPickerExtensionViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIDocumentPickerExtensionViewController  *(^)(UIView *  view))set_view;
-(UIDocumentPickerExtensionViewController  *(^)(NSString *  title))set_title;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIDocumentPickerExtensionViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIDocumentPickerExtensionViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIDocumentPickerExtensionViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIDocumentPickerExtensionViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIDocumentPickerExtensionViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UIDocumentPickerExtensionViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIDocumentPickerExtensionViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDocumentPickerExtensionViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDocumentPickerExtensionViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDocumentPickerExtensionViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDocumentPickerExtensionViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDocumentPickerExtensionViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDocumentPickerExtensionViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDocumentPickerExtensionViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDocumentPickerExtensionViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDocumentPickerExtensionViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDocumentPickerExtensionViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end