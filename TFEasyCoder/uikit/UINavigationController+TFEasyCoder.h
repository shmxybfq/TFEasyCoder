//
//  UINavigationController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UINavigationController,UINavigationController *);

@interface UINavigationController (TFEasyCoder)

TF_EC_MSTATIC_INT(UINavigationController, UINavigationController *);
TF_EC_MINSTANCE_INT(UINavigationController,UINavigationController *);


TF_EC_CHAIN_PROP_INT(UINavigationController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,navigationBarHidden)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,toolbarHidden)
TF_EC_CHAIN_PROP_INT(UINavigationController ,id<UINavigationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,hidesBarsWhenKeyboardAppears)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,hidesBarsOnSwipe)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,hidesBarsWhenVerticallyCompact)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,hidesBarsOnTap)





//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UINavigationController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UINavigationController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UINavigationController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UINavigationController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UINavigationController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UINavigationController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UINavigationController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UINavigationController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UINavigationController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UINavigationController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UINavigationController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UINavigationController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UINavigationController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UINavigationController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UINavigationController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UINavigationController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UINavigationController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UINavigationController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UINavigationController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UINavigationController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UINavigationController ,long long,accessibilityNavigationStyle)





@end