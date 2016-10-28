//
//  UITableView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITableView,UITableView *);

@interface UITableView (TFEasyCoder)

TF_EC_MSTATIC_INT(UITableView, UITableView *);
TF_EC_MINSTANCE_INT(UITableView,UITableView *);


TF_EC_CHAIN_PROP_INT(UITableView ,id<UITableViewDataSource> ,dataSource);
TF_EC_CHAIN_PROP_INT(UITableView ,id<UITableViewDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UITableView ,double,rowHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,double,sectionHeaderHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,double,sectionFooterHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,double,estimatedSectionHeaderHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,double,estimatedSectionFooterHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,UIEdgeInsets,separatorInset);
TF_EC_CHAIN_PROP_INT(UITableView ,UIView *,backgroundView);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,editing);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,allowsSelection);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,allowsSelectionDuringEditing);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,allowsMultipleSelection);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,allowsMultipleSelectionDuringEditing);
TF_EC_CHAIN_PROP_INT(UITableView ,UIColor *,sectionIndexColor);
TF_EC_CHAIN_PROP_INT(UITableView ,UIColor *,sectionIndexBackgroundColor);
TF_EC_CHAIN_PROP_INT(UITableView ,UIColor *,sectionIndexTrackingBackgroundColor);
TF_EC_CHAIN_PROP_INT(UITableView ,long long,separatorStyle);
TF_EC_CHAIN_PROP_INT(UITableView ,UIColor *,separatorColor);
TF_EC_CHAIN_PROP_INT(UITableView ,UIVisualEffect *,separatorEffect);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,cellLayoutMarginsFollowReadableWidth);
TF_EC_CHAIN_PROP_INT(UITableView ,UIView *,tableHeaderView);
TF_EC_CHAIN_PROP_INT(UITableView ,UIView *,tableFooterView);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,remembersLastFocusedIndexPath);


@end