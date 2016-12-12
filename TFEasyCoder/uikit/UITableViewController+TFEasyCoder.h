//
//  UITableViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITableViewController (TFEasyCoder)





-(UITableViewController  *(^)(UITableView *  tableView))set_tableView;
-(UITableViewController  *(^)(BOOL  clearsSelectionOnViewWillAppear))set_clearsSelectionOnViewWillAppear;




//superclass pros UIViewController
-(UITableViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UITableViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UITableViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UITableViewController  *(^)(UIView *  view))set_view;
-(UITableViewController  *(^)(NSString *  title))set_title;
-(UITableViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UITableViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UITableViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UITableViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UITableViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UITableViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UITableViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UITableViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UITableViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UITableViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UITableViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UITableViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UITableViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UITableViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITableViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITableViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITableViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITableViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITableViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITableViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITableViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITableViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITableViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITableViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITableViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITableViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITableViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end