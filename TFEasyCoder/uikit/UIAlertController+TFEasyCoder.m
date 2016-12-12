//
//  UIAlertController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAlertController+TFEasyCoder.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UIAlertController (TFEasyCoder)






-(UIAlertController  *(^)(UIAlertAction *  preferredAction))set_preferredAction{
    __weak typeof(self) weakSelf = self;
    return ^(UIAlertAction *  preferredAction){
        weakSelf.preferredAction = preferredAction;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(NSString *  title))set_title{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  title){
        weakSelf.title = title;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(NSString *  message))set_message{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  message){
        weakSelf.message = message;
        return weakSelf;
    };
}






//superclass pros UIViewController
-(UIAlertController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem{
    __weak typeof(self) weakSelf = self;
    return ^(UITabBarItem *  tabBarItem){
        weakSelf.tabBarItem = tabBarItem;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidesBottomBarWhenPushed){
        weakSelf.hidesBottomBarWhenPushed = hidesBottomBarWhenPushed;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIViewControllerTransitioningDelegate>    transitioningDelegate){
        weakSelf.transitioningDelegate = transitioningDelegate;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(UIView *  view))set_view{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  view){
        weakSelf.view = view;
        return weakSelf;
    };
}

//TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,title)
-(UIAlertController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  definesPresentationContext){
        weakSelf.definesPresentationContext = definesPresentationContext;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  providesPresentationContextTransitionStyle){
        weakSelf.providesPresentationContextTransitionStyle = providesPresentationContextTransitionStyle;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  modalTransitionStyle){
        weakSelf.modalTransitionStyle = modalTransitionStyle;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  modalPresentationStyle){
        weakSelf.modalPresentationStyle = modalPresentationStyle;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  modalPresentationCapturesStatusBarAppearance){
        weakSelf.modalPresentationCapturesStatusBarAppearance = modalPresentationCapturesStatusBarAppearance;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  wantsFullScreenLayout){
        weakSelf.wantsFullScreenLayout = wantsFullScreenLayout;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  edgesForExtendedLayout){
        weakSelf.edgesForExtendedLayout = edgesForExtendedLayout;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  extendedLayoutIncludesOpaqueBars){
        weakSelf.extendedLayoutIncludesOpaqueBars = extendedLayoutIncludesOpaqueBars;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  automaticallyAdjustsScrollViewInsets){
        weakSelf.automaticallyAdjustsScrollViewInsets = automaticallyAdjustsScrollViewInsets;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(CGSize  preferredContentSize))set_preferredContentSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  preferredContentSize){
        weakSelf.preferredContentSize = preferredContentSize;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  contentSizeForViewInPopover){
        weakSelf.contentSizeForViewInPopover = contentSizeForViewInPopover;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  modalInPopover))set_modalInPopover{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  modalInPopover){
        weakSelf.modalInPopover = modalInPopover;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UIAlertController  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIAlertController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIAlertController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
