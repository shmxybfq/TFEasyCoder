//
//  UICollectionViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollectionViewController (TFEasyCoder)





-(UICollectionViewController  *(^)(UICollectionView *  collectionView))set_collectionView;
-(UICollectionViewController  *(^)(BOOL  clearsSelectionOnViewWillAppear))set_clearsSelectionOnViewWillAppear;
-(UICollectionViewController  *(^)(BOOL  useLayoutToLayoutNavigationTransitions))set_useLayoutToLayoutNavigationTransitions;
-(UICollectionViewController  *(^)(BOOL  installsStandardGestureForInteractiveMovement))set_installsStandardGestureForInteractiveMovement;




//superclass pros UIViewController
-(UICollectionViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UICollectionViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UICollectionViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UICollectionViewController  *(^)(UIView *  view))set_view;
-(UICollectionViewController  *(^)(NSString *  title))set_title;
-(UICollectionViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UICollectionViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UICollectionViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UICollectionViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UICollectionViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UICollectionViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UICollectionViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UICollectionViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UICollectionViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UICollectionViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UICollectionViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UICollectionViewController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UICollectionViewController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UICollectionViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end