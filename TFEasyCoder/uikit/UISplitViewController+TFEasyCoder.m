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


@end