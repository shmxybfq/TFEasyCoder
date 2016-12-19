//
//  UIScrollView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIScrollView+TFEasyCoder.h"


@implementation UIScrollView (TFEasyCoder)





-(UIScrollView  *(^)(CGPoint  contentOffset))set_contentOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  contentOffset){
        weakSelf.contentOffset = contentOffset;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(CGSize  contentSize))set_contentSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  contentSize){
        weakSelf.contentSize = contentSize;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(UIEdgeInsets  contentInset))set_contentInset{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  contentInset){
        weakSelf.contentInset = contentInset;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(id<UIScrollViewDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIScrollViewDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  directionalLockEnabled))set_directionalLockEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  directionalLockEnabled){
        weakSelf.directionalLockEnabled = directionalLockEnabled;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  bounces))set_bounces{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  bounces){
        weakSelf.bounces = bounces;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  alwaysBounceVertical))set_alwaysBounceVertical{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  alwaysBounceVertical){
        weakSelf.alwaysBounceVertical = alwaysBounceVertical;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  alwaysBounceHorizontal))set_alwaysBounceHorizontal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  alwaysBounceHorizontal){
        weakSelf.alwaysBounceHorizontal = alwaysBounceHorizontal;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  pagingEnabled))set_pagingEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  pagingEnabled){
        weakSelf.pagingEnabled = pagingEnabled;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  scrollEnabled))set_scrollEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  scrollEnabled){
        weakSelf.scrollEnabled = scrollEnabled;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  showsHorizontalScrollIndicator))set_showsHorizontalScrollIndicator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsHorizontalScrollIndicator){
        weakSelf.showsHorizontalScrollIndicator = showsHorizontalScrollIndicator;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  showsVerticalScrollIndicator))set_showsVerticalScrollIndicator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsVerticalScrollIndicator){
        weakSelf.showsVerticalScrollIndicator = showsVerticalScrollIndicator;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(UIEdgeInsets  scrollIndicatorInsets))set_scrollIndicatorInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  scrollIndicatorInsets){
        weakSelf.scrollIndicatorInsets = scrollIndicatorInsets;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(long long  indicatorStyle))set_indicatorStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  indicatorStyle){
        weakSelf.indicatorStyle = indicatorStyle;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(double  decelerationRate))set_decelerationRate{
    __weak typeof(self) weakSelf = self;
    return ^(double  decelerationRate){
        weakSelf.decelerationRate = decelerationRate;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  delaysContentTouches))set_delaysContentTouches{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysContentTouches){
        weakSelf.delaysContentTouches = delaysContentTouches;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  canCancelContentTouches))set_canCancelContentTouches{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  canCancelContentTouches){
        weakSelf.canCancelContentTouches = canCancelContentTouches;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(double  minimumZoomScale))set_minimumZoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumZoomScale){
        weakSelf.minimumZoomScale = minimumZoomScale;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(double  maximumZoomScale))set_maximumZoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  maximumZoomScale){
        weakSelf.maximumZoomScale = maximumZoomScale;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(double  zoomScale))set_zoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  zoomScale){
        weakSelf.zoomScale = zoomScale;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  bouncesZoom))set_bouncesZoom{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  bouncesZoom){
        weakSelf.bouncesZoom = bouncesZoom;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  scrollsToTop))set_scrollsToTop{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  scrollsToTop){
        weakSelf.scrollsToTop = scrollsToTop;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(long long  keyboardDismissMode))set_keyboardDismissMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardDismissMode){
        weakSelf.keyboardDismissMode = keyboardDismissMode;
        return weakSelf;
    };
}






//superclass pros UIView
-(UIScrollView  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UIScrollView  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIScrollView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIScrollView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
