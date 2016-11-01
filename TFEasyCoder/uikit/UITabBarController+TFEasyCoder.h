//
//  UITabBarController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITabBarController,UITabBarController *);

@interface UITabBarController (TFEasyCoder)

TF_EC_MSTATIC_INT(UITabBarController, UITabBarController *);
TF_EC_MINSTANCE_INT(UITabBarController,UITabBarController *);


TF_EC_CHAIN_PROP_INT(UITabBarController ,NSArray *,viewControllers);
TF_EC_CHAIN_PROP_INT(UITabBarController ,UIViewController *,selectedViewController);
TF_EC_CHAIN_PROP_INT(UITabBarController ,unsigned long long,selectedIndex);
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSArray *,customizableViewControllers);
TF_EC_CHAIN_PROP_INT(UITabBarController ,id<UITabBarControllerDelegate> ,delegate);





//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UITabBarController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UITabBarController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UITabBarController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UITabBarController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UITabBarController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UITabBarController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UITabBarController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UITabBarController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITabBarController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITabBarController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITabBarController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITabBarController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITabBarController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITabBarController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UITabBarController);


@end