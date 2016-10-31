//
//  UIImagePickerController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIImagePickerController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIImagePickerController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIImagePickerController, UIImagePickerController *);
TF_EC_MINSTANCE_IMP(UIImagePickerController, UIImagePickerController *);


TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,id ,delegate)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,sourceType)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSArray *,mediaTypes)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,allowsEditing)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,allowsImageEditing)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,double,videoMaximumDuration)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,videoQuality)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,showsCameraControls)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,UIView *,cameraOverlayView)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,CGAffineTransform,cameraViewTransform)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,cameraCaptureMode)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,cameraDevice)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,cameraFlashMode)




//superclass pros UINavigationController
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,navigationBarHidden)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,toolbarHidden)
//TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,id<UINavigationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,hidesBarsWhenKeyboardAppears)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,hidesBarsOnSwipe)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,hidesBarsWhenVerticallyCompact)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,hidesBarsOnTap)
//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,accessibilityNavigationStyle)





@end