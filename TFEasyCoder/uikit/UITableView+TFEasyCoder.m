//
//  UITableView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITableView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITableView, UITableView *);
TF_EC_MINSTANCE_IMP(UITableView, UITableView *);


TF_EC_CHAIN_PROP_IMP(UITableView ,id<UITableViewDataSource>  ,dataSource)
TF_EC_CHAIN_PROP_IMP(UITableView ,id<UITableViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,rowHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,sectionHeaderHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,sectionFooterHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,estimatedSectionHeaderHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,estimatedSectionFooterHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIEdgeInsets,separatorInset)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIView *,backgroundView)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,editing)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,allowsSelection)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,allowsSelectionDuringEditing)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,allowsMultipleSelection)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,allowsMultipleSelectionDuringEditing)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIColor *,sectionIndexColor)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIColor *,sectionIndexBackgroundColor)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIColor *,sectionIndexTrackingBackgroundColor)
TF_EC_CHAIN_PROP_IMP(UITableView ,long long,separatorStyle)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIColor *,separatorColor)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIVisualEffect *,separatorEffect)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,cellLayoutMarginsFollowReadableWidth)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIView *,tableHeaderView)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIView *,tableFooterView)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,remembersLastFocusedIndexPath)


@end