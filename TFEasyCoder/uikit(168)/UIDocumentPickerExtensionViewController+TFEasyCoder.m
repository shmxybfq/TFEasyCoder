//
//  UIDocumentPickerExtensionViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDocumentPickerExtensionViewController+TFEasyCoder.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UIDocumentPickerExtensionViewController (TFEasyCoder)








//superclass pros UIViewController
-(UIDocumentPickerExtensionViewController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem{
    __weak typeof(self) weakSelf = self;
    return ^(UITabBarItem *  tabBarItem){
        weakSelf.tabBarItem = tabBarItem;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidesBottomBarWhenPushed){
        weakSelf.hidesBottomBarWhenPushed = hidesBottomBarWhenPushed;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIViewControllerTransitioningDelegate>    transitioningDelegate){
        weakSelf.transitioningDelegate = transitioningDelegate;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(UIView *  view))set_view{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  view){
        weakSelf.view = view;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(NSString *  title))set_title{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  title){
        weakSelf.title = title;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  definesPresentationContext){
        weakSelf.definesPresentationContext = definesPresentationContext;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  providesPresentationContextTransitionStyle){
        weakSelf.providesPresentationContextTransitionStyle = providesPresentationContextTransitionStyle;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  modalTransitionStyle){
        weakSelf.modalTransitionStyle = modalTransitionStyle;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  modalPresentationStyle){
        weakSelf.modalPresentationStyle = modalPresentationStyle;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  modalPresentationCapturesStatusBarAppearance){
        weakSelf.modalPresentationCapturesStatusBarAppearance = modalPresentationCapturesStatusBarAppearance;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  wantsFullScreenLayout){
        weakSelf.wantsFullScreenLayout = wantsFullScreenLayout;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  edgesForExtendedLayout){
        weakSelf.edgesForExtendedLayout = edgesForExtendedLayout;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  extendedLayoutIncludesOpaqueBars){
        weakSelf.extendedLayoutIncludesOpaqueBars = extendedLayoutIncludesOpaqueBars;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  automaticallyAdjustsScrollViewInsets){
        weakSelf.automaticallyAdjustsScrollViewInsets = automaticallyAdjustsScrollViewInsets;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(CGSize  preferredContentSize))set_preferredContentSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  preferredContentSize){
        weakSelf.preferredContentSize = preferredContentSize;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  contentSizeForViewInPopover){
        weakSelf.contentSizeForViewInPopover = contentSizeForViewInPopover;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  modalInPopover))set_modalInPopover{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  modalInPopover){
        weakSelf.modalInPopover = modalInPopover;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UIDocumentPickerExtensionViewController  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIDocumentPickerExtensionViewController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIDocumentPickerExtensionViewController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
