//
//  UISearchController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISearchController,UISearchController *);

@interface UISearchController (TFEasyCoder)

TF_EC_MSTATIC_INT(UISearchController, UISearchController *);
TF_EC_MINSTANCE_INT(UISearchController,UISearchController *);


TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,active);
TF_EC_CHAIN_PROP_INT(UISearchController ,id<UISearchControllerDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,dimsBackgroundDuringPresentation);
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,obscuresBackgroundDuringPresentation);
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,hidesNavigationBarDuringPresentation);




//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UISearchController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UISearchController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UISearchController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UISearchController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UISearchController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UISearchController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UISearchController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UISearchController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UISearchController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UISearchController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISearchController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISearchController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISearchController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISearchController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISearchController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISearchController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISearchController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISearchController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISearchController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISearchController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UISearchController);


@end