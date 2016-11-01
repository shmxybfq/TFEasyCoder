//
//  UINavigationController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UINavigationController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UINavigationController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UINavigationController, UINavigationController *);
TF_EC_MINSTANCE_IMP(UINavigationController, UINavigationController *);



TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,navigationBarHidden)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,toolbarHidden)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,id<UINavigationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,hidesBarsWhenKeyboardAppears)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,hidesBarsOnSwipe)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,hidesBarsWhenVerticallyCompact)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,hidesBarsOnTap)





//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UINavigationController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UINavigationController ,long long,accessibilityNavigationStyle)





@end
