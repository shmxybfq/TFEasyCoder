//
//  UISplitViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISplitViewController,UISplitViewController *);

@interface UISplitViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UISplitViewController, UISplitViewController *);
TF_EC_MINSTANCE_INT(UISplitViewController,UISplitViewController *);


TF_EC_CHAIN_PROP_INT(UISplitViewController ,NSArray *,viewControllers);
TF_EC_CHAIN_PROP_INT(UISplitViewController ,id<UISplitViewControllerDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,presentsWithGesture);
TF_EC_CHAIN_PROP_INT(UISplitViewController ,long long,preferredDisplayMode);
TF_EC_CHAIN_PROP_INT(UISplitViewController ,double,preferredPrimaryColumnWidthFraction);
TF_EC_CHAIN_PROP_INT(UISplitViewController ,double,minimumPrimaryColumnWidth);
TF_EC_CHAIN_PROP_INT(UISplitViewController ,double,maximumPrimaryColumnWidth);





//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UISplitViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UISplitViewController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISplitViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISplitViewController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UISplitViewController);


@end