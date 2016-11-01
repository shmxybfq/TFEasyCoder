//
//  UIVideoEditorController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIVideoEditorController,UIVideoEditorController *);

@interface UIVideoEditorController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIVideoEditorController, UIVideoEditorController *);
TF_EC_MINSTANCE_INT(UIVideoEditorController,UIVideoEditorController *);


TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,id ,delegate);
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSString *,videoPath);
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,double,videoMaximumDuration);
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,long long,videoQuality);




//superclass pros UINavigationController
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,navigationBarHidden)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,toolbarHidden)
//TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,id<UINavigationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,hidesBarsWhenKeyboardAppears)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,hidesBarsOnSwipe)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,hidesBarsWhenVerticallyCompact)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,hidesBarsOnTap)
//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIVideoEditorController);


@end