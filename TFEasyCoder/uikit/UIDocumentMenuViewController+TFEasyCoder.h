//
//  UIDocumentMenuViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIDocumentMenuViewController (TFEasyCoder)





-(UIDocumentMenuViewController  *(^)(id<UIDocumentMenuDelegate>   delegate))set_delegate;





//superclass pros UIViewController
-(UIDocumentMenuViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIDocumentMenuViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIDocumentMenuViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIDocumentMenuViewController  *(^)(UIView *  view))set_view;
-(UIDocumentMenuViewController  *(^)(NSString *  title))set_title;
-(UIDocumentMenuViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIDocumentMenuViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIDocumentMenuViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIDocumentMenuViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIDocumentMenuViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIDocumentMenuViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIDocumentMenuViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIDocumentMenuViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIDocumentMenuViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIDocumentMenuViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIDocumentMenuViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIDocumentMenuViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UIDocumentMenuViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIDocumentMenuViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDocumentMenuViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDocumentMenuViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDocumentMenuViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDocumentMenuViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDocumentMenuViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDocumentMenuViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDocumentMenuViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDocumentMenuViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDocumentMenuViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDocumentMenuViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDocumentMenuViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDocumentMenuViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDocumentMenuViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end