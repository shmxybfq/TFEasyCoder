//
//  UIPageViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPageViewController,UIPageViewController *);

@interface UIPageViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPageViewController, UIPageViewController *);
TF_EC_MINSTANCE_INT(UIPageViewController,UIPageViewController *);


TF_EC_CHAIN_PROP_INT(UIPageViewController ,id<UIPageViewControllerDelegate>,delegate);
TF_EC_CHAIN_PROP_INT(UIPageViewController ,id<UIPageViewControllerDataSource>,dataSource);
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,doubleSided);




//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UIPageViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIPageViewController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPageViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPageViewController ,long long,accessibilityNavigationStyle)





@end