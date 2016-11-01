//
//  UISearchController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISearchController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UISearchController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISearchController, UISearchController *);
TF_EC_MINSTANCE_IMP(UISearchController, UISearchController *);


TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,active)
TF_EC_CHAIN_PROP_IMP(UISearchController ,id<UISearchControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,dimsBackgroundDuringPresentation)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,obscuresBackgroundDuringPresentation)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,hidesNavigationBarDuringPresentation)




//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UISearchController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UISearchController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UISearchController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UISearchController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UISearchController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UISearchController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UISearchController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UISearchController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UISearchController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UISearchController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UISearchController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UISearchController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UISearchController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UISearchController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UISearchController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UISearchController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UISearchController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UISearchController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UISearchController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UISearchController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UISearchController);


@end
