//
//  UISearchDisplayController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISearchDisplayController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISearchDisplayController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISearchDisplayController, UISearchDisplayController *);
TF_EC_MINSTANCE_IMP(UISearchDisplayController, UISearchDisplayController *);


TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,id<UISearchDisplayDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,BOOL,active)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,id<UITableViewDataSource>  ,searchResultsDataSource)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,id<UITableViewDelegate>  ,searchResultsDelegate)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,NSString *,searchResultsTitle)
TF_EC_CHAIN_PROP_IMP(UISearchDisplayController ,BOOL,displaysSearchBarInNavigationBar)


@end