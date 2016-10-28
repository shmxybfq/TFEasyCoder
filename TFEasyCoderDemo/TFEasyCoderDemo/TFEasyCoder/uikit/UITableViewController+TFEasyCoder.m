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

@end