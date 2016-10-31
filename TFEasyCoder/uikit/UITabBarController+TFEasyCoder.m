//
//  UITabBarController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITabBarController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITabBarController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITabBarController, UITabBarController *);
TF_EC_MINSTANCE_IMP(UITabBarController, UITabBarController *);


TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,UIViewController *,selectedViewController)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,unsigned long long,selectedIndex)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSArray *,customizableViewControllers)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,id<UITabBarControllerDelegate>  ,delegate)





//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UITabBarController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITabBarController ,long long,accessibilityNavigationStyle)





@end