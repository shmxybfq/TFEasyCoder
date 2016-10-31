//
//  UITableViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITableViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITableViewController, UITableViewController *);
TF_EC_MINSTANCE_IMP(UITableViewController, UITableViewController *);


TF_EC_CHAIN_PROP_IMP(UITableViewController ,UITableView *,tableView)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,clearsSelectionOnViewWillAppear)




//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UITableViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UITableViewController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITableViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITableViewController ,long long,accessibilityNavigationStyle)





@end