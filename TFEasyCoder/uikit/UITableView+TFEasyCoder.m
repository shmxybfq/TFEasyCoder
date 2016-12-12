//
//  UITableView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableView+TFEasyCoder.h"


@implementation UITableView (TFEasyCoder)





-(UITableView  *(^)(id<UITableViewDataSource>    dataSource))set_dataSource{
    __weak typeof(self) weakSelf = self;
    return ^(id<UITableViewDataSource>    dataSource){
        weakSelf.dataSource = dataSource;
        return weakSelf;
    };
}

-(UITableView  *(^)(id<UITableViewDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UITableViewDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UITableView  *(^)(double  rowHeight))set_rowHeight{
    __weak typeof(self) weakSelf = self;
    return ^(double  rowHeight){
        weakSelf.rowHeight = rowHeight;
        return weakSelf;
    };
}

-(UITableView  *(^)(double  sectionHeaderHeight))set_sectionHeaderHeight{
    __weak typeof(self) weakSelf = self;
    return ^(double  sectionHeaderHeight){
        weakSelf.sectionHeaderHeight = sectionHeaderHeight;
        return weakSelf;
    };
}

-(UITableView  *(^)(double  sectionFooterHeight))set_sectionFooterHeight{
    __weak typeof(self) weakSelf = self;
    return ^(double  sectionFooterHeight){
        weakSelf.sectionFooterHeight = sectionFooterHeight;
        return weakSelf;
    };
}

-(UITableView  *(^)(double  estimatedSectionHeaderHeight))set_estimatedSectionHeaderHeight{
    __weak typeof(self) weakSelf = self;
    return ^(double  estimatedSectionHeaderHeight){
        weakSelf.estimatedSectionHeaderHeight = estimatedSectionHeaderHeight;
        return weakSelf;
    };
}

-(UITableView  *(^)(double  estimatedSectionFooterHeight))set_estimatedSectionFooterHeight{
    __weak typeof(self) weakSelf = self;
    return ^(double  estimatedSectionFooterHeight){
        weakSelf.estimatedSectionFooterHeight = estimatedSectionFooterHeight;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIEdgeInsets  separatorInset))set_separatorInset{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  separatorInset){
        weakSelf.separatorInset = separatorInset;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIView *  backgroundView))set_backgroundView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  backgroundView){
        weakSelf.backgroundView = backgroundView;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  editing))set_editing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  editing){
        weakSelf.editing = editing;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  allowsSelection))set_allowsSelection{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsSelection){
        weakSelf.allowsSelection = allowsSelection;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  allowsSelectionDuringEditing))set_allowsSelectionDuringEditing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsSelectionDuringEditing){
        weakSelf.allowsSelectionDuringEditing = allowsSelectionDuringEditing;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  allowsMultipleSelection))set_allowsMultipleSelection{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsMultipleSelection){
        weakSelf.allowsMultipleSelection = allowsMultipleSelection;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  allowsMultipleSelectionDuringEditing))set_allowsMultipleSelectionDuringEditing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsMultipleSelectionDuringEditing){
        weakSelf.allowsMultipleSelectionDuringEditing = allowsMultipleSelectionDuringEditing;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIColor *  sectionIndexColor))set_sectionIndexColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  sectionIndexColor){
        weakSelf.sectionIndexColor = sectionIndexColor;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIColor *  sectionIndexBackgroundColor))set_sectionIndexBackgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  sectionIndexBackgroundColor){
        weakSelf.sectionIndexBackgroundColor = sectionIndexBackgroundColor;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIColor *  sectionIndexTrackingBackgroundColor))set_sectionIndexTrackingBackgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  sectionIndexTrackingBackgroundColor){
        weakSelf.sectionIndexTrackingBackgroundColor = sectionIndexTrackingBackgroundColor;
        return weakSelf;
    };
}

-(UITableView  *(^)(long long  separatorStyle))set_separatorStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  separatorStyle){
        weakSelf.separatorStyle = separatorStyle;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIColor *  separatorColor))set_separatorColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  separatorColor){
        weakSelf.separatorColor = separatorColor;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIVisualEffect *  separatorEffect))set_separatorEffect{
    __weak typeof(self) weakSelf = self;
    return ^(UIVisualEffect *  separatorEffect){
        weakSelf.separatorEffect = separatorEffect;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  cellLayoutMarginsFollowReadableWidth))set_cellLayoutMarginsFollowReadableWidth{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  cellLayoutMarginsFollowReadableWidth){
        weakSelf.cellLayoutMarginsFollowReadableWidth = cellLayoutMarginsFollowReadableWidth;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIView *  tableHeaderView))set_tableHeaderView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  tableHeaderView){
        weakSelf.tableHeaderView = tableHeaderView;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIView *  tableFooterView))set_tableFooterView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  tableFooterView){
        weakSelf.tableFooterView = tableFooterView;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  remembersLastFocusedIndexPath))set_remembersLastFocusedIndexPath{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  remembersLastFocusedIndexPath){
        weakSelf.remembersLastFocusedIndexPath = remembersLastFocusedIndexPath;
        return weakSelf;
    };
}






//superclass pros UIScrollView
-(UITableView  *(^)(CGPoint  contentOffset))set_contentOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  contentOffset){
        weakSelf.contentOffset = contentOffset;
        return weakSelf;
    };
}

-(UITableView  *(^)(CGSize  contentSize))set_contentSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  contentSize){
        weakSelf.contentSize = contentSize;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIEdgeInsets  contentInset))set_contentInset{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  contentInset){
        weakSelf.contentInset = contentInset;
        return weakSelf;
    };
}

//TF_EC_CHAIN_PROP_IMP(UITableView ,id<UIScrollViewDelegate>  ,delegate)
-(UITableView  *(^)(BOOL  directionalLockEnabled))set_directionalLockEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  directionalLockEnabled){
        weakSelf.directionalLockEnabled = directionalLockEnabled;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  bounces))set_bounces{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  bounces){
        weakSelf.bounces = bounces;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  alwaysBounceVertical))set_alwaysBounceVertical{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  alwaysBounceVertical){
        weakSelf.alwaysBounceVertical = alwaysBounceVertical;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  alwaysBounceHorizontal))set_alwaysBounceHorizontal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  alwaysBounceHorizontal){
        weakSelf.alwaysBounceHorizontal = alwaysBounceHorizontal;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  pagingEnabled))set_pagingEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  pagingEnabled){
        weakSelf.pagingEnabled = pagingEnabled;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  scrollEnabled))set_scrollEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  scrollEnabled){
        weakSelf.scrollEnabled = scrollEnabled;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  showsHorizontalScrollIndicator))set_showsHorizontalScrollIndicator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsHorizontalScrollIndicator){
        weakSelf.showsHorizontalScrollIndicator = showsHorizontalScrollIndicator;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  showsVerticalScrollIndicator))set_showsVerticalScrollIndicator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsVerticalScrollIndicator){
        weakSelf.showsVerticalScrollIndicator = showsVerticalScrollIndicator;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIEdgeInsets  scrollIndicatorInsets))set_scrollIndicatorInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  scrollIndicatorInsets){
        weakSelf.scrollIndicatorInsets = scrollIndicatorInsets;
        return weakSelf;
    };
}

-(UITableView  *(^)(long long  indicatorStyle))set_indicatorStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  indicatorStyle){
        weakSelf.indicatorStyle = indicatorStyle;
        return weakSelf;
    };
}

-(UITableView  *(^)(double  decelerationRate))set_decelerationRate{
    __weak typeof(self) weakSelf = self;
    return ^(double  decelerationRate){
        weakSelf.decelerationRate = decelerationRate;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  delaysContentTouches))set_delaysContentTouches{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysContentTouches){
        weakSelf.delaysContentTouches = delaysContentTouches;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  canCancelContentTouches))set_canCancelContentTouches{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  canCancelContentTouches){
        weakSelf.canCancelContentTouches = canCancelContentTouches;
        return weakSelf;
    };
}

-(UITableView  *(^)(double  minimumZoomScale))set_minimumZoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumZoomScale){
        weakSelf.minimumZoomScale = minimumZoomScale;
        return weakSelf;
    };
}

-(UITableView  *(^)(double  maximumZoomScale))set_maximumZoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  maximumZoomScale){
        weakSelf.maximumZoomScale = maximumZoomScale;
        return weakSelf;
    };
}

-(UITableView  *(^)(double  zoomScale))set_zoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  zoomScale){
        weakSelf.zoomScale = zoomScale;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  bouncesZoom))set_bouncesZoom{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  bouncesZoom){
        weakSelf.bouncesZoom = bouncesZoom;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  scrollsToTop))set_scrollsToTop{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  scrollsToTop){
        weakSelf.scrollsToTop = scrollsToTop;
        return weakSelf;
    };
}

-(UITableView  *(^)(long long  keyboardDismissMode))set_keyboardDismissMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardDismissMode){
        weakSelf.keyboardDismissMode = keyboardDismissMode;
        return weakSelf;
    };
}

//superclass pros UIView
-(UITableView  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UITableView  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UITableView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UITableView  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UITableView  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UITableView  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UITableView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UITableView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UITableView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UITableView  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UITableView  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UITableView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UITableView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UITableView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UITableView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UITableView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UITableView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
