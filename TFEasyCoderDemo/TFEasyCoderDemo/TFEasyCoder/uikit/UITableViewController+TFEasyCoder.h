//
//  UITableViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITableViewController,UITableViewController *);

@interface UITableViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UITableViewController, UITableViewController *);
TF_EC_MINSTANCE_INT(UITableViewController,UITableViewController *);


TF_EC_CHAIN_PROP_INT(UITableViewController ,UITableView *,tableView);
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,clearsSelectionOnViewWillAppear);




//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UITableViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UITableViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UITableViewController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UITableViewController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UITableViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UITableViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UITableViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UITableViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UITableViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UITableViewController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITableViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITableViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITableViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITableViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITableViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITableViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITableViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITableViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITableViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITableViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITableViewController ,long long,accessibilityNavigationStyle)





@end