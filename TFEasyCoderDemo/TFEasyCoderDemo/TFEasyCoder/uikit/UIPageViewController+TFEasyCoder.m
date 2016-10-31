//
//  UIPageViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPageViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPageViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPageViewController, UIPageViewController *);
TF_EC_MINSTANCE_IMP(UIPageViewController, UIPageViewController *);


TF_EC_CHAIN_PROP_IMP(UIPageViewController ,id<UIPageViewControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,id<UIPageViewControllerDataSource>  ,dataSource)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,doubleSided)




//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,long long,accessibilityNavigationStyle)





@end