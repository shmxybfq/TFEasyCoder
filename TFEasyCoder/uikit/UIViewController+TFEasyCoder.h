//
//  UIViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIViewController,UIViewController *);

@interface UIViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIViewController, UIViewController *);
TF_EC_MINSTANCE_INT(UIViewController,UIViewController *);

TF_EC_CHAIN_PROP_INT(UIViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UIViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UIViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UIViewController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UIViewController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UIViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UIViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UIViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UIViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UIViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UIViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UIViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UIViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UIViewController ,BOOL,modalInPopover)


@end