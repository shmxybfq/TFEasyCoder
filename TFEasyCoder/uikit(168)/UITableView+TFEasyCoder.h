//
//  UITableView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITableView (TFEasyCoder)





-(UITableView  *(^)(id<UITableViewDataSource>   dataSource))set_dataSource;
-(UITableView  *(^)(id<UITableViewDelegate>   delegate))set_delegate;
-(UITableView  *(^)(double  rowHeight))set_rowHeight;
-(UITableView  *(^)(double  sectionHeaderHeight))set_sectionHeaderHeight;
-(UITableView  *(^)(double  sectionFooterHeight))set_sectionFooterHeight;
-(UITableView  *(^)(double  estimatedSectionHeaderHeight))set_estimatedSectionHeaderHeight;
-(UITableView  *(^)(double  estimatedSectionFooterHeight))set_estimatedSectionFooterHeight;
-(UITableView  *(^)(UIEdgeInsets  separatorInset))set_separatorInset;
-(UITableView  *(^)(UIView *  backgroundView))set_backgroundView;
-(UITableView  *(^)(BOOL  editing))set_editing;
-(UITableView  *(^)(BOOL  allowsSelection))set_allowsSelection;
-(UITableView  *(^)(BOOL  allowsSelectionDuringEditing))set_allowsSelectionDuringEditing;
-(UITableView  *(^)(BOOL  allowsMultipleSelection))set_allowsMultipleSelection;
-(UITableView  *(^)(BOOL  allowsMultipleSelectionDuringEditing))set_allowsMultipleSelectionDuringEditing;
-(UITableView  *(^)(UIColor *  sectionIndexColor))set_sectionIndexColor;
-(UITableView  *(^)(UIColor *  sectionIndexBackgroundColor))set_sectionIndexBackgroundColor;
-(UITableView  *(^)(UIColor *  sectionIndexTrackingBackgroundColor))set_sectionIndexTrackingBackgroundColor;
-(UITableView  *(^)(long long  separatorStyle))set_separatorStyle;
-(UITableView  *(^)(UIColor *  separatorColor))set_separatorColor;
-(UITableView  *(^)(UIVisualEffect *  separatorEffect))set_separatorEffect;
-(UITableView  *(^)(BOOL  cellLayoutMarginsFollowReadableWidth))set_cellLayoutMarginsFollowReadableWidth;
-(UITableView  *(^)(UIView *  tableHeaderView))set_tableHeaderView;
-(UITableView  *(^)(UIView *  tableFooterView))set_tableFooterView;
-(UITableView  *(^)(BOOL  remembersLastFocusedIndexPath))set_remembersLastFocusedIndexPath;





//superclass pros UIScrollView
-(UITableView  *(^)(CGPoint  contentOffset))set_contentOffset;
-(UITableView  *(^)(CGSize  contentSize))set_contentSize;
-(UITableView  *(^)(UIEdgeInsets  contentInset))set_contentInset;
//TF_EC_CHAIN_PROP_INT(UITableView ,id<UIScrollViewDelegate> ,delegate);
-(UITableView  *(^)(BOOL  directionalLockEnabled))set_directionalLockEnabled;
-(UITableView  *(^)(BOOL  bounces))set_bounces;
-(UITableView  *(^)(BOOL  alwaysBounceVertical))set_alwaysBounceVertical;
-(UITableView  *(^)(BOOL  alwaysBounceHorizontal))set_alwaysBounceHorizontal;
-(UITableView  *(^)(BOOL  pagingEnabled))set_pagingEnabled;
-(UITableView  *(^)(BOOL  scrollEnabled))set_scrollEnabled;
-(UITableView  *(^)(BOOL  showsHorizontalScrollIndicator))set_showsHorizontalScrollIndicator;
-(UITableView  *(^)(BOOL  showsVerticalScrollIndicator))set_showsVerticalScrollIndicator;
-(UITableView  *(^)(UIEdgeInsets  scrollIndicatorInsets))set_scrollIndicatorInsets;
-(UITableView  *(^)(long long  indicatorStyle))set_indicatorStyle;
-(UITableView  *(^)(double  decelerationRate))set_decelerationRate;
-(UITableView  *(^)(BOOL  delaysContentTouches))set_delaysContentTouches;
-(UITableView  *(^)(BOOL  canCancelContentTouches))set_canCancelContentTouches;
-(UITableView  *(^)(double  minimumZoomScale))set_minimumZoomScale;
-(UITableView  *(^)(double  maximumZoomScale))set_maximumZoomScale;
-(UITableView  *(^)(double  zoomScale))set_zoomScale;
-(UITableView  *(^)(BOOL  bouncesZoom))set_bouncesZoom;
-(UITableView  *(^)(BOOL  scrollsToTop))set_scrollsToTop;
-(UITableView  *(^)(long long  keyboardDismissMode))set_keyboardDismissMode;
//superclass pros UIView
-(UITableView  *(^)(UIView *  maskView))set_maskView;
-(UITableView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UITableView  *(^)(long long  tag))set_tag;
-(UITableView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UITableView  *(^)(CGPoint  center))set_center;
-(UITableView  *(^)(CGRect  frame))set_frame;
-(UITableView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UITableView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UITableView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITableView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITableView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITableView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITableView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITableView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITableView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITableView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITableView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITableView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITableView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITableView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITableView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITableView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
