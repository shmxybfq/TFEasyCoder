//
//  UIScrollView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIScrollView (TFEasyCoder)





-(UIScrollView  *(^)(CGPoint  contentOffset))set_contentOffset;
-(UIScrollView  *(^)(CGSize  contentSize))set_contentSize;
-(UIScrollView  *(^)(UIEdgeInsets  contentInset))set_contentInset;
-(UIScrollView  *(^)(id<UIScrollViewDelegate>   delegate))set_delegate;
-(UIScrollView  *(^)(BOOL  directionalLockEnabled))set_directionalLockEnabled;
-(UIScrollView  *(^)(BOOL  bounces))set_bounces;
-(UIScrollView  *(^)(BOOL  alwaysBounceVertical))set_alwaysBounceVertical;
-(UIScrollView  *(^)(BOOL  alwaysBounceHorizontal))set_alwaysBounceHorizontal;
-(UIScrollView  *(^)(BOOL  pagingEnabled))set_pagingEnabled;
-(UIScrollView  *(^)(BOOL  scrollEnabled))set_scrollEnabled;
-(UIScrollView  *(^)(BOOL  showsHorizontalScrollIndicator))set_showsHorizontalScrollIndicator;
-(UIScrollView  *(^)(BOOL  showsVerticalScrollIndicator))set_showsVerticalScrollIndicator;
-(UIScrollView  *(^)(UIEdgeInsets  scrollIndicatorInsets))set_scrollIndicatorInsets;
-(UIScrollView  *(^)(long long  indicatorStyle))set_indicatorStyle;
-(UIScrollView  *(^)(double  decelerationRate))set_decelerationRate;
-(UIScrollView  *(^)(BOOL  delaysContentTouches))set_delaysContentTouches;
-(UIScrollView  *(^)(BOOL  canCancelContentTouches))set_canCancelContentTouches;
-(UIScrollView  *(^)(double  minimumZoomScale))set_minimumZoomScale;
-(UIScrollView  *(^)(double  maximumZoomScale))set_maximumZoomScale;
-(UIScrollView  *(^)(double  zoomScale))set_zoomScale;
-(UIScrollView  *(^)(BOOL  bouncesZoom))set_bouncesZoom;
-(UIScrollView  *(^)(BOOL  scrollsToTop))set_scrollsToTop;
-(UIScrollView  *(^)(long long  keyboardDismissMode))set_keyboardDismissMode;





//superclass pros UIView
-(UIScrollView  *(^)(UIView *  maskView))set_maskView;
-(UIScrollView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIScrollView  *(^)(long long  tag))set_tag;
-(UIScrollView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIScrollView  *(^)(CGPoint  center))set_center;
-(UIScrollView  *(^)(CGRect  frame))set_frame;
-(UIScrollView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIScrollView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIScrollView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIScrollView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIScrollView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIScrollView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIScrollView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIScrollView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIScrollView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIScrollView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIScrollView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIScrollView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIScrollView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIScrollView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIScrollView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIScrollView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
