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


@end