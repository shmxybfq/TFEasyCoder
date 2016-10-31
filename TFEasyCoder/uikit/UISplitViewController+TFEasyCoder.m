//
//  UISplitViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISplitViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISplitViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISplitViewController, UISplitViewController *);
TF_EC_MINSTANCE_IMP(UISplitViewController, UISplitViewController *);


TF_EC_CHAIN_PROP_IMP(UISplitViewController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,id<UISplitViewControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,presentsWithGesture)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,long long,preferredDisplayMode)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,double,preferredPrimaryColumnWidthFraction)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,double,minimumPrimaryColumnWidth)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,double,maximumPrimaryColumnWidth)





//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UISplitViewController ,long long,accessibilityNavigationStyle)





@end