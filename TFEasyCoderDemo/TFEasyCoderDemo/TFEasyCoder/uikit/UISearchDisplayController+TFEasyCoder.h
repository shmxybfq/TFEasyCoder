//
//  UISearchDisplayController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_BLOCK(UISearchDisplayController,UISearchDisplayController *);

@interface UISearchDisplayController (TFEasyCoder)

TF_EC_MSTATIC_INT(UISearchDisplayController, UISearchDisplayController *);
TF_EC_MINSTANCE_INT(UISearchDisplayController,UISearchDisplayController *);


TF_EC_CHAIN_PROP_INT(UISearchDisplayController ,id<UISearchDisplayDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UISearchDisplayController ,BOOL,active);
TF_EC_CHAIN_PROP_INT(UISearchDisplayController ,id<UITableViewDataSource> ,searchResultsDataSource);
TF_EC_CHAIN_PROP_INT(UISearchDisplayController ,id<UITableViewDelegate> ,searchResultsDelegate);
TF_EC_CHAIN_PROP_INT(UISearchDisplayController ,NSString *,searchResultsTitle);
TF_EC_CHAIN_PROP_INT(UISearchDisplayController ,BOOL,displaysSearchBarInNavigationBar);


@end