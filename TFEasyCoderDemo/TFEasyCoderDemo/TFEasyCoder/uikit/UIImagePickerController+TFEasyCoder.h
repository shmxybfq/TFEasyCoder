//
//  UIImagePickerController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIImagePickerController,UIImagePickerController *);

@interface UIImagePickerController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIImagePickerController, UIImagePickerController *);
TF_EC_MINSTANCE_INT(UIImagePickerController,UIImagePickerController *);


TF_EC_CHAIN_PROP_INT(UIImagePickerController ,id ,delegate)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,sourceType);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSArray *,mediaTypes);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,allowsEditing);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,allowsImageEditing);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,double,videoMaximumDuration);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,videoQuality);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,showsCameraControls);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,UIView *,cameraOverlayView);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,CGAffineTransform,cameraViewTransform);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,cameraCaptureMode);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,cameraDevice);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,cameraFlashMode);




//superclass pros UINavigationController
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,navigationBarHidden)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,toolbarHidden)
//TF_EC_CHAIN_PROP_INT(UIImagePickerController ,id<UINavigationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,hidesBarsWhenKeyboardAppears)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,hidesBarsOnSwipe)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,hidesBarsWhenVerticallyCompact)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,hidesBarsOnTap)
//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,accessibilityNavigationStyle)





@end