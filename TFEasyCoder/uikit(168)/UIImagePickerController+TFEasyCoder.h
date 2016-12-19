//
//  UIImagePickerController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIImagePickerController (TFEasyCoder)





-(UIImagePickerController  *(^)(id   delegate))set_delegate;
-(UIImagePickerController  *(^)(long long  sourceType))set_sourceType;
-(UIImagePickerController  *(^)(NSArray *  mediaTypes))set_mediaTypes;
-(UIImagePickerController  *(^)(BOOL  allowsEditing))set_allowsEditing;
-(UIImagePickerController  *(^)(BOOL  allowsImageEditing))set_allowsImageEditing;
-(UIImagePickerController  *(^)(double  videoMaximumDuration))set_videoMaximumDuration;
-(UIImagePickerController  *(^)(long long  videoQuality))set_videoQuality;
-(UIImagePickerController  *(^)(BOOL  showsCameraControls))set_showsCameraControls;
-(UIImagePickerController  *(^)(UIView *  cameraOverlayView))set_cameraOverlayView;
-(UIImagePickerController  *(^)(CGAffineTransform  cameraViewTransform))set_cameraViewTransform;
-(UIImagePickerController  *(^)(long long  cameraCaptureMode))set_cameraCaptureMode;
-(UIImagePickerController  *(^)(long long  cameraDevice))set_cameraDevice;
-(UIImagePickerController  *(^)(long long  cameraFlashMode))set_cameraFlashMode;




//superclass pros UINavigationController
-(UIImagePickerController  *(^)(NSArray *  viewControllers))set_viewControllers;
-(UIImagePickerController  *(^)(BOOL  navigationBarHidden))set_navigationBarHidden;
-(UIImagePickerController  *(^)(BOOL  toolbarHidden))set_toolbarHidden;
//TF_EC_CHAIN_PROP_INT(UIImagePickerController ,id<UINavigationControllerDelegate>  ,delegate)
-(UIImagePickerController  *(^)(BOOL  hidesBarsWhenKeyboardAppears))set_hidesBarsWhenKeyboardAppears;
-(UIImagePickerController  *(^)(BOOL  hidesBarsOnSwipe))set_hidesBarsOnSwipe;
-(UIImagePickerController  *(^)(BOOL  hidesBarsWhenVerticallyCompact))set_hidesBarsWhenVerticallyCompact;
-(UIImagePickerController  *(^)(BOOL  hidesBarsOnTap))set_hidesBarsOnTap;
//superclass pros UIViewController
-(UIImagePickerController  *(^)(UITabBarItem *  tabBarItem))set_tabBarItem;
-(UIImagePickerController  *(^)(BOOL  hidesBottomBarWhenPushed))set_hidesBottomBarWhenPushed;
-(UIImagePickerController  *(^)(id<UIViewControllerTransitioningDelegate>    transitioningDelegate))set_transitioningDelegate;
-(UIImagePickerController  *(^)(UIView *  view))set_view;
-(UIImagePickerController  *(^)(NSString *  title))set_title;
-(UIImagePickerController  *(^)(BOOL  definesPresentationContext))set_definesPresentationContext;
-(UIImagePickerController  *(^)(BOOL  providesPresentationContextTransitionStyle))set_providesPresentationContextTransitionStyle;
-(UIImagePickerController  *(^)(long long  modalTransitionStyle))set_modalTransitionStyle;
-(UIImagePickerController  *(^)(long long  modalPresentationStyle))set_modalPresentationStyle;
-(UIImagePickerController  *(^)(BOOL  modalPresentationCapturesStatusBarAppearance))set_modalPresentationCapturesStatusBarAppearance;
-(UIImagePickerController  *(^)(BOOL  wantsFullScreenLayout))set_wantsFullScreenLayout;
-(UIImagePickerController  *(^)(unsigned long long  edgesForExtendedLayout))set_edgesForExtendedLayout;
-(UIImagePickerController  *(^)(BOOL  extendedLayoutIncludesOpaqueBars))set_extendedLayoutIncludesOpaqueBars;
-(UIImagePickerController  *(^)(BOOL  automaticallyAdjustsScrollViewInsets))set_automaticallyAdjustsScrollViewInsets;
-(UIImagePickerController  *(^)(CGSize  preferredContentSize))set_preferredContentSize;
-(UIImagePickerController  *(^)(CGSize  contentSizeForViewInPopover))set_contentSizeForViewInPopover;
-(UIImagePickerController  *(^)(BOOL  modalInPopover))set_modalInPopover;
//superclass pros UIResponder
-(UIImagePickerController  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIImagePickerController  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIImagePickerController  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIImagePickerController  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIImagePickerController  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIImagePickerController  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIImagePickerController  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIImagePickerController  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIImagePickerController  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIImagePickerController  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIImagePickerController  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIImagePickerController  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIImagePickerController  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIImagePickerController  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIImagePickerController  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end