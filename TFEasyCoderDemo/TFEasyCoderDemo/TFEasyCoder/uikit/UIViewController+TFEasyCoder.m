//
//  UIViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIViewController, UIViewController *);
TF_EC_MINSTANCE_IMP(UIViewController, UIViewController *);


TF_EC_CHAIN_PROP_IMP(UIViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UIViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UIViewController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UIViewController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UIViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UIViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UIViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,modalInPopover)




//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIViewController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIViewController ,long long,accessibilityNavigationStyle)





@end