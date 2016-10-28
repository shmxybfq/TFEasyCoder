//
//  UISearchController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISearchController,UISearchController *);

@interface UISearchController (TFEasyCoder)

TF_EC_MSTATIC_INT(UISearchController, UISearchController *);
TF_EC_MINSTANCE_INT(UISearchController,UISearchController *);


TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,active);
TF_EC_CHAIN_PROP_INT(UISearchController ,id<UISearchControllerDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,dimsBackgroundDuringPresentation);
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,obscuresBackgroundDuringPresentation);
TF_EC_CHAIN_PROP_INT(UISearchController ,BOOL,hidesNavigationBarDuringPresentation);

@end