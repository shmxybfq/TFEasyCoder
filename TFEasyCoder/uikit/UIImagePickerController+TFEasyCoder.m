//
//  UIImagePickerController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIImagePickerController+TFEasyCoder.h"


@implementation UIImagePickerController (TFEasyCoder)





-(UIImagePickerController  *(^)(id   delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id   delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(long long  sourceType))set_sourceType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  sourceType){
        weakSelf.sourceType = sourceType;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(NSArray *  mediaTypes))set_mediaTypes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  mediaTypes){
        weakSelf.mediaTypes = mediaTypes;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  allowsEditing))set_allowsEditing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsEditing){
        weakSelf.allowsEditing = allowsEditing;
        return weakSelf;
    };
}


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


-(UIImagePickerController  *(^)(BOOL  allowsImageEditing))set_allowsImageEditing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsImageEditing){
        weakSelf.allowsImageEditing = allowsImageEditing;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(double  videoMaximumDuration))set_videoMaximumDuration{
    __weak typeof(self) weakSelf = self;
    return ^(double  videoMaximumDuration){
        weakSelf.videoMaximumDuration = videoMaximumDuration;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(long long  videoQuality))set_videoQuality{
    __weak typeof(self) weakSelf = self;
    return ^(long long  videoQuality){
        weakSelf.videoQuality = videoQuality;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  showsCameraControls))set_showsCameraControls{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsCameraControls){
        weakSelf.showsCameraControls = showsCameraControls;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(UIView *  cameraOverlayView))set_cameraOverlayView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  cameraOverlayView){
        weakSelf.cameraOverlayView = cameraOverlayView;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(CGAffineTransform  cameraViewTransform))set_cameraViewTransform{
    __weak typeof(self) weakSelf = self;
    return ^(CGAffineTransform  cameraViewTransform){
        weakSelf.cameraViewTransform = cameraViewTransform;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(long long  cameraCaptureMode))set_cameraCaptureMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  cameraCaptureMode){
        weakSelf.cameraCaptureMode = cameraCaptureMode;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(long long  cameraDevice))set_cameraDevice{
    __weak typeof(self) weakSelf = self;
    return ^(long long  cameraDevice){
        weakSelf.cameraDevice = cameraDevice;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(long long  cameraFlashMode))set_cameraFlashMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  cameraFlashMode){
        weakSelf.cameraFlashMode = cameraFlashMode;
        return weakSelf;
    };
}





//superclass pros UINavigationController
-(UIImagePickerController  *(^)(NSArray *  viewControllers))set_viewControllers{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  viewControllers){
        weakSelf.viewControllers = viewControllers;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  navigationBarHidden))set_navigationBarHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  navigationBarHidden){
        weakSelf.navigationBarHidden = navigationBarHidden;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  toolbarHidden))set_toolbarHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  toolbarHidden){
        weakSelf.toolbarHidden = toolbarHidden;
        return weakSelf;
    };
}

//TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,id<UINavigationControllerDelegate>  ,delegate)
-(UIImagePickerController  *(^)(BOOL  hidesBarsWhenKeyboardAppears))set_hidesBarsWhenKeyboardAppears{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidesBarsWhenKeyboardAppears){
        weakSelf.hidesBarsWhenKeyboardAppears = hidesBarsWhenKeyboardAppears;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  hidesBarsOnSwipe))set_hidesBarsOnSwipe{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidesBarsOnSwipe){
        weakSelf.hidesBarsOnSwipe = hidesBarsOnSwipe;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  hidesBarsWhenVerticallyCompact))set_hidesBarsWhenVerticallyCompact{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidesBarsWhenVerticallyCompact){
        weakSelf.hidesBarsWhenVerticallyCompact = hidesBarsWhenVerticallyCompact;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  hidesBarsOnTap))set_hidesBarsOnTap{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidesBarsOnTap){
        weakSelf.hidesBarsOnTap = hidesBarsOnTap;
        return weakSelf;
    };
}

//superclass pros UIViewController
-(UIImagePickerController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem{
    __weak typeof(self) weakSelf = self;
    return ^(UITabBarItem *  tabBarItem){
        weakSelf.tabBarItem = tabBarItem;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  hidesBottomBarWhenPushed){
        weakSelf.hidesBottomBarWhenPushed = hidesBottomBarWhenPushed;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIViewControllerTransitioningDelegate>    transitioningDelegate){
        weakSelf.transitioningDelegate = transitioningDelegate;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(UIView *  view))set_view{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  view){
        weakSelf.view = view;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(NSString *  title))set_title{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  title){
        weakSelf.title = title;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  definesPresentationContext){
        weakSelf.definesPresentationContext = definesPresentationContext;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  providesPresentationContextTransitionStyle){
        weakSelf.providesPresentationContextTransitionStyle = providesPresentationContextTransitionStyle;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  modalTransitionStyle){
        weakSelf.modalTransitionStyle = modalTransitionStyle;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  modalPresentationStyle){
        weakSelf.modalPresentationStyle = modalPresentationStyle;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  modalPresentationCapturesStatusBarAppearance){
        weakSelf.modalPresentationCapturesStatusBarAppearance = modalPresentationCapturesStatusBarAppearance;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  wantsFullScreenLayout){
        weakSelf.wantsFullScreenLayout = wantsFullScreenLayout;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  edgesForExtendedLayout){
        weakSelf.edgesForExtendedLayout = edgesForExtendedLayout;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  extendedLayoutIncludesOpaqueBars){
        weakSelf.extendedLayoutIncludesOpaqueBars = extendedLayoutIncludesOpaqueBars;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  automaticallyAdjustsScrollViewInsets){
        weakSelf.automaticallyAdjustsScrollViewInsets = automaticallyAdjustsScrollViewInsets;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(CGSize  preferredContentSize))set_preferredContentSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  preferredContentSize){
        weakSelf.preferredContentSize = preferredContentSize;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  contentSizeForViewInPopover){
        weakSelf.contentSizeForViewInPopover = contentSizeForViewInPopover;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  modalInPopover))set_modalInPopover{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  modalInPopover){
        weakSelf.modalInPopover = modalInPopover;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UIImagePickerController  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIImagePickerController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIImagePickerController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end