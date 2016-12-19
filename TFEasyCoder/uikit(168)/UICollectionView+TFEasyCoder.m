//
//  UICollectionView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionView+TFEasyCoder.h"


@implementation UICollectionView (TFEasyCoder)





-(UICollectionView  *(^)(UICollectionViewLayout *  collectionViewLayout))set_collectionViewLayout{
    __weak typeof(self) weakSelf = self;
    return ^(UICollectionViewLayout *  collectionViewLayout){
        weakSelf.collectionViewLayout = collectionViewLayout;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(id<UICollectionViewDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UICollectionViewDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(id<UICollectionViewDataSource>    dataSource))set_dataSource{
    __weak typeof(self) weakSelf = self;
    return ^(id<UICollectionViewDataSource>    dataSource){
        weakSelf.dataSource = dataSource;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(UIView *  backgroundView))set_backgroundView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  backgroundView){
        weakSelf.backgroundView = backgroundView;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  allowsSelection))set_allowsSelection{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsSelection){
        weakSelf.allowsSelection = allowsSelection;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  allowsMultipleSelection))set_allowsMultipleSelection{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsMultipleSelection){
        weakSelf.allowsMultipleSelection = allowsMultipleSelection;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  remembersLastFocusedIndexPath))set_remembersLastFocusedIndexPath{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  remembersLastFocusedIndexPath){
        weakSelf.remembersLastFocusedIndexPath = remembersLastFocusedIndexPath;
        return weakSelf;
    };
}






//superclass pros UIScrollView
-(UICollectionView  *(^)(CGPoint  contentOffset))set_contentOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  contentOffset){
        weakSelf.contentOffset = contentOffset;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(CGSize  contentSize))set_contentSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  contentSize){
        weakSelf.contentSize = contentSize;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(UIEdgeInsets  contentInset))set_contentInset{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  contentInset){
        weakSelf.contentInset = contentInset;
        return weakSelf;
    };
}

//TF_EC_CHAIN_PROP_IMP(UICollectionView ,id<UIScrollViewDelegate>  ,delegate)
-(UICollectionView  *(^)(BOOL  directionalLockEnabled))set_directionalLockEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  directionalLockEnabled){
        weakSelf.directionalLockEnabled = directionalLockEnabled;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  bounces))set_bounces{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  bounces){
        weakSelf.bounces = bounces;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  alwaysBounceVertical))set_alwaysBounceVertical{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  alwaysBounceVertical){
        weakSelf.alwaysBounceVertical = alwaysBounceVertical;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  alwaysBounceHorizontal))set_alwaysBounceHorizontal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  alwaysBounceHorizontal){
        weakSelf.alwaysBounceHorizontal = alwaysBounceHorizontal;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  pagingEnabled))set_pagingEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  pagingEnabled){
        weakSelf.pagingEnabled = pagingEnabled;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  scrollEnabled))set_scrollEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  scrollEnabled){
        weakSelf.scrollEnabled = scrollEnabled;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  showsHorizontalScrollIndicator))set_showsHorizontalScrollIndicator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsHorizontalScrollIndicator){
        weakSelf.showsHorizontalScrollIndicator = showsHorizontalScrollIndicator;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  showsVerticalScrollIndicator))set_showsVerticalScrollIndicator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsVerticalScrollIndicator){
        weakSelf.showsVerticalScrollIndicator = showsVerticalScrollIndicator;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(UIEdgeInsets  scrollIndicatorInsets))set_scrollIndicatorInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  scrollIndicatorInsets){
        weakSelf.scrollIndicatorInsets = scrollIndicatorInsets;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(long long  indicatorStyle))set_indicatorStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  indicatorStyle){
        weakSelf.indicatorStyle = indicatorStyle;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(double  decelerationRate))set_decelerationRate{
    __weak typeof(self) weakSelf = self;
    return ^(double  decelerationRate){
        weakSelf.decelerationRate = decelerationRate;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  delaysContentTouches))set_delaysContentTouches{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysContentTouches){
        weakSelf.delaysContentTouches = delaysContentTouches;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  canCancelContentTouches))set_canCancelContentTouches{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  canCancelContentTouches){
        weakSelf.canCancelContentTouches = canCancelContentTouches;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(double  minimumZoomScale))set_minimumZoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumZoomScale){
        weakSelf.minimumZoomScale = minimumZoomScale;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(double  maximumZoomScale))set_maximumZoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  maximumZoomScale){
        weakSelf.maximumZoomScale = maximumZoomScale;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(double  zoomScale))set_zoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  zoomScale){
        weakSelf.zoomScale = zoomScale;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  bouncesZoom))set_bouncesZoom{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  bouncesZoom){
        weakSelf.bouncesZoom = bouncesZoom;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  scrollsToTop))set_scrollsToTop{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  scrollsToTop){
        weakSelf.scrollsToTop = scrollsToTop;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(long long  keyboardDismissMode))set_keyboardDismissMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardDismissMode){
        weakSelf.keyboardDismissMode = keyboardDismissMode;
        return weakSelf;
    };
}

//superclass pros UIView
-(UICollectionView  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UICollectionView  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UICollectionView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UICollectionView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
