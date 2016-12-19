//
//  UICollectionView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UICollectionView (TFEasyCoder)





-(UICollectionView  *(^)(UICollectionViewLayout *  collectionViewLayout))set_collectionViewLayout;
-(UICollectionView  *(^)(id<UICollectionViewDelegate>   delegate))set_delegate;
-(UICollectionView  *(^)(id<UICollectionViewDataSource>   dataSource))set_dataSource;
-(UICollectionView  *(^)(UIView *  backgroundView))set_backgroundView;
-(UICollectionView  *(^)(BOOL  allowsSelection))set_allowsSelection;
-(UICollectionView  *(^)(BOOL  allowsMultipleSelection))set_allowsMultipleSelection;
-(UICollectionView  *(^)(BOOL  remembersLastFocusedIndexPath))set_remembersLastFocusedIndexPath;





//superclass pros UIScrollView
-(UICollectionView  *(^)(CGPoint  contentOffset))set_contentOffset;
-(UICollectionView  *(^)(CGSize  contentSize))set_contentSize;
-(UICollectionView  *(^)(UIEdgeInsets  contentInset))set_contentInset;
//TF_EC_CHAIN_PROP_INT(UICollectionView ,id<UIScrollViewDelegate> ,delegate);
-(UICollectionView  *(^)(BOOL  directionalLockEnabled))set_directionalLockEnabled;
-(UICollectionView  *(^)(BOOL  bounces))set_bounces;
-(UICollectionView  *(^)(BOOL  alwaysBounceVertical))set_alwaysBounceVertical;
-(UICollectionView  *(^)(BOOL  alwaysBounceHorizontal))set_alwaysBounceHorizontal;
-(UICollectionView  *(^)(BOOL  pagingEnabled))set_pagingEnabled;
-(UICollectionView  *(^)(BOOL  scrollEnabled))set_scrollEnabled;
-(UICollectionView  *(^)(BOOL  showsHorizontalScrollIndicator))set_showsHorizontalScrollIndicator;
-(UICollectionView  *(^)(BOOL  showsVerticalScrollIndicator))set_showsVerticalScrollIndicator;
-(UICollectionView  *(^)(UIEdgeInsets  scrollIndicatorInsets))set_scrollIndicatorInsets;
-(UICollectionView  *(^)(long long  indicatorStyle))set_indicatorStyle;
-(UICollectionView  *(^)(double  decelerationRate))set_decelerationRate;
-(UICollectionView  *(^)(BOOL  delaysContentTouches))set_delaysContentTouches;
-(UICollectionView  *(^)(BOOL  canCancelContentTouches))set_canCancelContentTouches;
-(UICollectionView  *(^)(double  minimumZoomScale))set_minimumZoomScale;
-(UICollectionView  *(^)(double  maximumZoomScale))set_maximumZoomScale;
-(UICollectionView  *(^)(double  zoomScale))set_zoomScale;
-(UICollectionView  *(^)(BOOL  bouncesZoom))set_bouncesZoom;
-(UICollectionView  *(^)(BOOL  scrollsToTop))set_scrollsToTop;
-(UICollectionView  *(^)(long long  keyboardDismissMode))set_keyboardDismissMode;
//superclass pros UIView
-(UICollectionView  *(^)(UIView *  maskView))set_maskView;
-(UICollectionView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UICollectionView  *(^)(long long  tag))set_tag;
-(UICollectionView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UICollectionView  *(^)(CGPoint  center))set_center;
-(UICollectionView  *(^)(CGRect  frame))set_frame;
-(UICollectionView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UICollectionView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UICollectionView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UICollectionView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UICollectionView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UICollectionView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UICollectionView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UICollectionView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UICollectionView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UICollectionView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UICollectionView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UICollectionView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UICollectionView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UICollectionView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UICollectionView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UICollectionView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
