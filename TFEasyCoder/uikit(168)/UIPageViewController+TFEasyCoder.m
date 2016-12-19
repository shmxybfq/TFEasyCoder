//
//  UIPageViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPageViewController+TFEasyCoder.h"



#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UIPageViewController (TFEasyCoder)





-(UIPageViewController  *(^)(id<UIPageViewControllerDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIPageViewControllerDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(id<UIPageViewControllerDataSource>    dataSource))set_dataSource{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIPageViewControllerDataSource>    dataSource){
        weakSelf.dataSource = dataSource;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  doubleSided))set_doubleSided{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  doubleSided){
        weakSelf.doubleSided = doubleSided;
        return weakSelf;
    };
}





//superclass pros UIViewController
-(UIPageViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem{
    __weak typeof(self) weakSelf = self;
    return ^(UITabBarItem *  tabBarItem){
        weakSelf.tabBarItem = tabBarItem;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidesBottomBarWhenPushed){
        weakSelf.hidesBottomBarWhenPushed = hidesBottomBarWhenPushed;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIViewControllerTransitioningDelegate>    transitioningDelegate){
        weakSelf.transitioningDelegate = transitioningDelegate;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(UIView *  view))set_view{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  view){
        weakSelf.view = view;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(NSString *  title))set_title{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  title){
        weakSelf.title = title;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  definesPresentationContext){
        weakSelf.definesPresentationContext = definesPresentationContext;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  providesPresentationContextTransitionStyle){
        weakSelf.providesPresentationContextTransitionStyle = providesPresentationContextTransitionStyle;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  modalTransitionStyle){
        weakSelf.modalTransitionStyle = modalTransitionStyle;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  modalPresentationStyle){
        weakSelf.modalPresentationStyle = modalPresentationStyle;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  modalPresentationCapturesStatusBarAppearance){
        weakSelf.modalPresentationCapturesStatusBarAppearance = modalPresentationCapturesStatusBarAppearance;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  wantsFullScreenLayout){
        weakSelf.wantsFullScreenLayout = wantsFullScreenLayout;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  edgesForExtendedLayout){
        weakSelf.edgesForExtendedLayout = edgesForExtendedLayout;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  extendedLayoutIncludesOpaqueBars){
        weakSelf.extendedLayoutIncludesOpaqueBars = extendedLayoutIncludesOpaqueBars;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  automaticallyAdjustsScrollViewInsets){
        weakSelf.automaticallyAdjustsScrollViewInsets = automaticallyAdjustsScrollViewInsets;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  preferredContentSize){
        weakSelf.preferredContentSize = preferredContentSize;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  contentSizeForViewInPopover){
        weakSelf.contentSizeForViewInPopover = contentSizeForViewInPopover;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  modalInPopover))set_modalInPopover{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  modalInPopover){
        weakSelf.modalInPopover = modalInPopover;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UIPageViewController  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIPageViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIPageViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
