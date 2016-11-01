//
//  UISearchContainerViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISearchContainerViewController,UISearchContainerViewController *);

@interface UISearchContainerViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UISearchContainerViewController, UISearchContainerViewController *);
TF_EC_MINSTANCE_INT(UISearchContainerViewController,UISearchContainerViewController *);





//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISearchContainerViewController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UISearchContainerViewController);


@end